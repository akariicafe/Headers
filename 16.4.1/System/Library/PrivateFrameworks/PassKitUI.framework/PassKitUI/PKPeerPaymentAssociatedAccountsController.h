@class PKFamilyMemberCollection, NSString, PKPeerPaymentAssociatedAccountControllerDoneTapHelper, UINavigationController, PKContactAvatarManager, PKPeerPaymentAccount, PKPeerPaymentService, PKPeerPaymentAssociatedAccountPresentationContext, PKPaymentService;
@protocol PKPassLibraryDataProvider;

@interface PKPeerPaymentAssociatedAccountsController : NSObject <PKPeerPaymentAssociatedAccountSetupDelegate> {
    long long _context;
    PKPaymentService *_paymentService;
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentAccount *_account;
    PKFamilyMemberCollection *_familyCollection;
    PKContactAvatarManager *_avatarManager;
    UINavigationController *_navigationController;
    PKPeerPaymentAssociatedAccountPresentationContext *_presentationContext;
    PKPeerPaymentAssociatedAccountControllerDoneTapHelper *_doneTapHelper;
    NSString *_viewerFamilyMemberTypeAnalyticsKey;
    id<PKPassLibraryDataProvider> _passLibraryDataProvider;
    BOOL _didBeginReporter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFamilyMembers:(id)a0;
- (void)_endReportingSessionIfNecessary;
- (id)initWithFamilyCollection:(id)a0 avatarManager:(id)a1 passLibraryDataProvider:(id)a2;
- (void)_begingReportingIfNecessary;
- (void)_peerPaymentAccountChanged:(id)a0;
- (void)addPeerPaymentAssociatedAccountDidSkipSetupForFamilyMember:(id)a0;
- (void)addPeerPaymentAssociatedAccountSetupCompletedWithSucess:(BOOL)a0 updatedAccount:(id)a1 forFamilyMember:(id)a2;
- (id)initWithFamilyCollection:(id)a0 avatarManager:(id)a1 passLibraryDataProvider:(id)a2 context:(long long)a3;
- (id)initWithFamilyMembers:(id)a0 altDSIDToImageData:(id)a1;
- (void)presentAssociatedAccountsFlowWithPresentationContext:(id)a0 fromNavigationController:(id)a1;
- (void)presentSetupFlowForFAFamilyMember:(id)a0 fromNavigationController:(id)a1;

@end
