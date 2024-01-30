@protocol NPKOpenURLRouterDelegate;

@interface NPKOpenURLRouter : NSObject

@property (weak, nonatomic) id<NPKOpenURLRouterDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)_handleSubcredentialInvitationAcceptanceForLocalInvitationIdentifier:(id)a0 remoteInvitationIdentifier:(id)a1 contactName:(id)a2 thumbnailImageData:(id)a3;
- (BOOL)_handleServiceModeRequestedForPassWithUniqueID:(id)a0;
- (BOOL)_handleShareForMailboxAddress:(id)a0 referralSource:(id)a1;
- (BOOL)_handleShareableCredentialsAcceptanceWithShareableCredentials:(id)a0 thumbnailImageData:(id)a1;
- (BOOL)_handleUniversalLinkURLAsShoeboxURLForPathComponents:(id)a0 shouldParsePathComponents:(BOOL)a1 urlComponents:(id)a2;
- (BOOL)_isValidRelayServerURL:(id)a0 outPathComponents:(id *)a1;
- (BOOL)_presentEntitlementDetailsForPassUniqueID:(id)a0;
- (BOOL)_presentPassDetailsForPassWithUniqueID:(id)a0;
- (BOOL)_presentPassListPreventAppUninstall;
- (BOOL)_presentShareDetailsForPassUniqueID:(id)a0 shareIdentifier:(id)a1;
- (BOOL)_presentTransactionDetailsForPassWithUniqueID:(id)a0 serviceIdentifier:(id)a1;
- (BOOL)_processCardHostWithPathComponents:(id)a0 queryItems:(id)a1;
- (BOOL)_processPassesHostWithPathComponents:(id)a0 urlComponents:(id)a1;
- (BOOL)_processShareHostWithPathComponents:(id)a0 urlComponents:(id)a1;
- (BOOL)_processShareableCredentialsHostWithQueryItems:(id)a0;
- (BOOL)_processShoeboxSchemeForHost:(id)a0 pathComponents:(id)a1 urlComponents:(id)a2;
- (BOOL)_processShoeboxSchemeForURL:(id)a0;
- (BOOL)_processSubcredentialInvitationHostWithQueryItems:(id)a0;
- (BOOL)_processTransactionHostWithQueryItems:(id)a0;
- (BOOL)handleOpenURL:(id)a0;
- (BOOL)handleUniversalLinkWithURL:(id)a0;
- (BOOL)handleUniversalLinkWithUserActivity:(id)a0;
- (void)openURLInSafariForURL:(id)a0;

@end
