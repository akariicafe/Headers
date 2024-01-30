@class NSString, NSDictionary;

@interface BSServiceSpecification : NSObject <NSCopying, BSDescriptionProviding> {
    NSDictionary *_options;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isHiddenAtLaunch) BOOL hiddenAtLaunch;
@property (readonly, nonatomic, getter=isDerived) BOOL derived;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)optionForKey:(id)a0;
- (void).cxx_destruct;

@end
