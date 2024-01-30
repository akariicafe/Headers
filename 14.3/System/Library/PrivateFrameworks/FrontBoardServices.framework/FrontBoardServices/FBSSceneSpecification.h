@class NSString;

@interface FBSSceneSpecification : NSObject <NSCopying, BSDescriptionProviding> {
    BOOL _forLocalSynchronousSceneClientProvider;
}

@property (readonly, nonatomic) Class hostAgentClass;
@property (readonly, nonatomic) Class clientAgentClass;
@property (readonly, nonatomic) Class settingsClass;
@property (readonly, nonatomic) Class clientSettingsClass;
@property (readonly, nonatomic) Class transitionContextClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)specification;
+ (void /* function */ *)_swizzleMethodOnClass:(Class)a0 originalSelector:(SEL)a1 block:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)isValid;
- (id)_copyForLocalSynchronousSceneClientProvider;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;

@end
