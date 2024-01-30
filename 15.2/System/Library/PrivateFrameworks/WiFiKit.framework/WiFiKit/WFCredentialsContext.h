@class SFPasswordSharingService, NSArray, WFNetworkScanRecord, NSString, WFNetworkProfile, UIViewController;
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
@property (nonatomic, getter=isWeakSecurity) BOOL weakSecurity;
@property (nonatomic) long long availableAuthTraits;
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

- (void)appWillEnterForeground:(id)a0;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)appDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)appWillResignActive:(id)a0;
- (void)cancel;
- (long long)securityMode;
- (void)appDidBecomeActive:(id)a0;
- (void)service:(id)a0 receivedNetworkInfo:(id)a1;
- (void)launchSettings;
- (BOOL)service:(id)a0 shouldPromptForNetwork:(id)a1;
- (void)gatherCredentials:(id /* block */)a0;
- (id)initWithNetwork:(id)a0 profile:(id)a1;
- (void)finishWithError:(id)a0 forNetwork:(id)a1 profile:(id)a2;
- (id)initWithNetwork:(id)a0 profile:(id)a1 authTraits:(long long)a2;
- (BOOL)validateCredentials;
- (BOOL)validatePassword;
- (void)activatePasswordSharing;
- (void)deactivatePasswordSharingWithReactivation:(BOOL)a0;

@end
