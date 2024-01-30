@class NSString, ACAccount, NSMutableDictionary;

@interface AMSUIPaymentVerificationProtocolHandler : AMSURLProtocolHandler <NSURLSessionDelegate, AMSURLProtocolDelegate>

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSMutableDictionary *accountParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)headersFromAccount:(id)a0 accountParameters:(id)a1;
+ (id)requestAddingHeaders:(id)a0 to:(id)a1;
+ (id)_headersFromAccountParameters:(id)a0;
+ (id)_headersFromAccount:(id)a0;
+ (void)_setHeaders:(id)a0 on:(id)a1;

@end
