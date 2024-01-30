@class PKPeerPaymentAssociatedAccountControllerDoneTapHelper, NSString, NSArray, UINavigationController, NSDictionary, PKPeerPaymentAccount, NSMutableArray, PKFamilyMember, PKPeerPaymentService, PKPeerPaymentAssociatedAccountPresentationContext, PKPaymentService;
@protocol PKPassLibraryDataProvider;

@interface PKPeerPaymentAssociatedAccountsController : NSObject <PKPeerPaymentAssociatedAccountSetupDelegate> {
    long long _context;
    PKPaymentService *_paymentService;
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentAccount *_account;
    NSArray *_familyMembers;
    PKFamilyMember *_viewer;
    NSDictionary *_altDSIDToImageData;
    UINavigationController *_navigationController;
    PKPeerPaymentAssociatedAccountPresentationContext *_presentationContext;
    PKPeerPaymentAssociatedAccountControllerDoneTapHelper *_doneTapHelper;
    NSString *_viewerFamilyMemberTypeAnalyticsKey;
    id<PKPassLibraryDataProvider> _passLibraryDataProvider;
    BOOL _didBeginReporter;
    BOOL _fetchingFamilyMembers;
    NSMutableArray *_familyCircleCompletionHandlers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_updateFamilyMembersWithMembers:(id)a0;
- (id)initWithPKFamilyMembers:(id)a0 altDSIDToImageData:(id)a1 passLibraryDataProvider:(id)a2 context:(long long)a3;
- (void)_fetchFamilyMembersIfNeccessaryWithCompletion:(id /* block */)a0;
- (void)_begingReportingIfNecessary;
- (void)_endReportingSessionIfNecessary;
- (void)presentAssociatedAccountsFlowWithPresentationContext:(id)a0 fromNavigationController:(id)a1;
- (void)_callFamilyCircleCompletions;
- (void)presentSetupFlowForFAFamilyMember:(id)a0 fromNavigationController:(id)a1;
- (id)initWithFamilyMembers:(id)a0 altDSIDToImageData:(id)a1;
- (id)initWithPKFamilyMembers:(id)a0 altDSIDToImageData:(id)a1 passLibraryDataProvider:(id)a2;
- (void)_peerPaymentAccountChanged:(id)a0;
- (void)addPeerPaymentAssociatedAccountSetupCompletedWithSucess:(BOOL)a0 updatedAccount:(id)a1 forFamilyMember:(id)a2;
- (void)addPeerPaymentAssociatedAccountDidSkipSetupForFamilyMember:(id)a0;
- (id)initWithFamilyMembers:(id)a0;

@end
