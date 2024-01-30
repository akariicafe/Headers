@class PKPaymentService, NSString, PKAccountService, NSHashTable, PKApplyController, NSObject, PKFamilyMember, PKDeviceSharingCapabilitiesManager, PKAccount, PKFamilyMemberCollection;
@protocol OS_dispatch_queue;

@interface PKAccountInvitationController : NSObject <PKPaymentServiceDelegate, PKSetupFlowControllerProtocol> {
    PKPaymentService *_paymentService;
    PKAccountService *_accountService;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockObservers;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) PKAccount *account;
@property (readonly, nonatomic) unsigned long long feature;
@property (readonly, nonatomic) long long context;
@property (readonly, nonatomic) PKApplyController *applyController;
@property (readonly, nonatomic) PKDeviceSharingCapabilitiesManager *deviceCapabiltiesManager;
@property (readonly, nonatomic) PKFamilyMemberCollection *familyMemberCollection;
@property (retain, nonatomic) PKFamilyMember *familyMember;
@property (nonatomic) unsigned long long accessLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canInviteAccountUserWithAccount:(id)a0;
+ (void)presentCreateAccountUserInvitationWithViewController:(id)a0 account:(id)a1 accountUserCollection:(id)a2 familyMemberCollection:(id)a3 context:(long long)a4 completion:(id /* block */)a5;

- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (void)didUpdateFamilyMembers:(id)a0;
- (void)_accessObserversWithHandler:(id /* block */)a0;
- (void)didAddAccountPendingFamilyMembers:(id)a0;
- (void)_fetchFamilyMemberDeviceCapabilties;
- (id)_filteredFamilyMembersFromFamilyMembers:(id)a0 accountUsers:(id)a1 invitations:(id)a2;
- (void)_informObserversOfFamilyMemberChange;
- (void)accessLevelOptionsWithCompletion:(id /* block */)a0;
- (long long)familyCircleCount;
- (void)familyMembersForceReload:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithAccount:(id)a0 context:(long long)a1 familyMemberCollection:(id)a2;
- (BOOL)isCurrentFamilyMemberAnOrganizer;
- (void)nextViewControllerWithCompletion:(id /* block */)a0;

@end
