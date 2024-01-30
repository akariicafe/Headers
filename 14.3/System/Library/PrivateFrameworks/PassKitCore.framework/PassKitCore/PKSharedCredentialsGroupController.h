@class PKPaymentPass, NSArray, PKPeerPaymentContactResolver, PKAppletSubcredential, NSHashTable, NSObject, PKPaymentWebService;
@protocol OS_dispatch_queue;

@interface PKSharedCredentialsGroupController : NSObject {
    PKPeerPaymentContactResolver *_contactResolver;
    PKPaymentWebService *_webService;
    PKAppletSubcredential *_credential;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_delegates;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _delegateLock;
}

@property (readonly, nonatomic) NSArray *groups;
@property (readonly, nonatomic) NSArray *nonLocalGroups;
@property (readonly, nonatomic) BOOL sharingEnabled;
@property (readonly, nonatomic) PKPaymentPass *pass;

- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (void)didUpdateGroups;
- (id)contactForGroup:(id)a0;
- (void)parseCredentialsOnPass:(id)a0;
- (void)updateGroupsWithCredential:(id)a0;
- (unsigned long long)numberOfOutstandingSharingSession;
- (void)immobilizerTokenCountWithCompletion:(id /* block */)a0;
- (id)initWithPass:(id)a0 contactResolver:(id)a1 webService:(id)a2 queue:(id)a3;
- (void)fetchContactForGroup:(id)a0 withCompletion:(id /* block */)a1;
- (void)canSendInvitationWithCompletion:(id /* block */)a0;
- (void)revokeGroup:(id)a0 withCompletion:(id /* block */)a1;

@end
