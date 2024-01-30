@class NSDictionary, NSString;

@interface SBSRemoteAlertDefinition : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying>

@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *impersonatedCarPlayAppIdentifier;
@property (nonatomic, getter=isForCarPlay) BOOL forCarPlay;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *viewControllerClassName;
@property (copy, nonatomic) NSString *secondaryViewControllerClassName;
@property (nonatomic) BOOL prefersEmbeddedDisplayPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 viewControllerClassName:(id)a1;

@end
