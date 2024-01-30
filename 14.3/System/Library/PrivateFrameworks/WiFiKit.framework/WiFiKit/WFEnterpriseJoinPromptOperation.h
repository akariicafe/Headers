@class NSString;

@interface WFEnterpriseJoinPromptOperation : WFUserPromptOperation <WFCredentialsProvider>

@property (readonly, nonatomic) struct __SecIdentity { } *TLSIdentity;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, nonatomic) BOOL wantsModalPresentation;

+ (id)enterpriseJoinPromptOperationWithDeviceCapability:(long long)a0;

@end
