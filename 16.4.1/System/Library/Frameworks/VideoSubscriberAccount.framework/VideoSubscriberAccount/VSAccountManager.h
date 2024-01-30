@class VSSecurityTask, VSPrivacyInfoCenter, VSViewServiceRequestCenter, NSString, VSLinkedOnOrAfterChecker;
@protocol VSAccountManagerDelegate;

@interface VSAccountManager : NSObject <VSViewServiceRequestOperationDelegate>

@property (retain, nonatomic) VSSecurityTask *securityTask;
@property (retain, nonatomic) VSPrivacyInfoCenter *privacyInfoCenter;
@property (retain, nonatomic) VSViewServiceRequestCenter *requestCenter;
@property (retain, nonatomic) VSLinkedOnOrAfterChecker *linkedOnOrAfterChecker;
@property (weak, nonatomic) id<VSAccountManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_enqueueViewServiceRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)checkAccessStatusWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)enqueueAccountMetadataRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)viewServiceRequestOperation:(id)a0 dismissViewController:(id)a1;
- (void)viewServiceRequestOperation:(id)a0 presentViewController:(id)a1;
- (BOOL)viewServiceRequestOperation:(id)a0 shouldAuthenticateAccountProviderWithIdentifier:(id)a1;

@end
