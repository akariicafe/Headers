@class MCMContainerIdentity;

@interface MCMXPCMessageSetDataProtection : MCMXPCMessageWithContainerBase <MCMParametersSetDataProtection>

@property (readonly, nonatomic, getter=isThirdParty) BOOL thirdParty;
@property (readonly, nonatomic) int dataProtectionClass;
@property (readonly, nonatomic) BOOL retryIfLocked;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;

@end
