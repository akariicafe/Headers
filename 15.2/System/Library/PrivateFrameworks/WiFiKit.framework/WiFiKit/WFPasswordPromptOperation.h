@class NSString;
@protocol WFCredentialsProviderContext;

@interface WFPasswordPromptOperation : WFUserPromptOperation <WFCredentialsProvider>

@property (retain, nonatomic) id<WFCredentialsProviderContext> credentialsProviderContext;
@property (copy, nonatomic) NSString *password;
@property (readonly, nonatomic) struct __SecIdentity { } *TLSIdentity;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, nonatomic) BOOL wantsModalPresentation;

+ (id)passwordPromptOperationWithCredentialsContext:(id)a0;

@end
