@class SFPasswordSharingService, NSArray, WFNetworkScanRecord, WFHealthIssue, NSString, WFNetworkProfile, UIViewController;
@protocol WFNetworkView;

@interface WFCredentialsContext : NSObject <SFPasswordSharingServiceDelegate, WFCredentialsProviderContext, WFContextPresenting>

@property (retain, nonatomic) WFNetworkProfile *profile;
@property (retain, nonatomic) WFNetworkScanRecord *network;
@property (nonatomic) long long requestedFields;
@property (copy, nonatomic) id /* block */ providerCallback;
@property (retain, nonatomic) NSArray *availableTLSIdentities;
@property (nonatomic, getter=isEnterprise) BOOL enterprise;
@property (retain, nonatomic) SFPasswordSharingService *passwordSharingService;
@property (nonatomic) BOOL shouldReactivatePasswordSharing;
@property (nonatomic) long long availableAuthTraits;
@property (retain, nonatomic) WFHealthIssue *securityIssue;
@property (nonatomic, getter=isPasswordSharingSupported) BOOL passwordSharingSupported;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ cancellationHandler;
@property (readonly, nonatomic) NSString *username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController<WFNetworkView> *provider;
@property (readonly, nonatomic) BOOL needsDismissal;

- (long long)securityMode;
- (void)finishWithError:(id)a0;
- (void)appWillResignActive:(id)a0;
- (void)cancel;
- (void)dealloc;
- (void)appDidBecomeActive:(id)a0;
- (void)appDidEnterBackground:(id)a0;
- (void)appWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)service:(id)a0 receivedNetworkInfo:(id)a1;
- (BOOL)service:(id)a0 shouldPromptForNetwork:(id)a1;
- (void)launchSettings;
- (void)activatePasswordSharing;
- (void)deactivatePasswordSharingWithReactivation:(BOOL)a0;
- (void)gatherCredentials:(id /* block */)a0;
- (BOOL)validateCredentials;
- (BOOL)validatePassword;
- (void)finishWithError:(id)a0 forNetwork:(id)a1 profile:(id)a2;
- (id)initWithNetwork:(id)a0 profile:(id)a1;
- (id)initWithNetwork:(id)a0 profile:(id)a1 authTraits:(long long)a2;

@end
