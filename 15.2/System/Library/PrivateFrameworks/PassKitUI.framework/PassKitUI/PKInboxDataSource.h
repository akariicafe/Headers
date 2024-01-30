@class NSString, NSMutableArray, PKPaymentService;
@protocol PKInboxDataSourceDelegate;

@interface PKInboxDataSource : NSObject <PKPaymentServiceDelegate> {
    id<PKInboxDataSourceDelegate> _delegate;
    PKPaymentService *_paymentService;
    NSMutableArray *_activeInboxMessages;
    NSMutableArray *_hiddenInboxMessages;
    NSMutableArray *_expiredInboxMessages;
    NSMutableArray *_inboxUpdateCompletionBlocks;
    BOOL _updatingInbox;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) unsigned long long badgeCount;
@property (readonly, nonatomic) BOOL hasInboxMessages;
@property (readonly, nonatomic) BOOL inboxVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)featureApplicationRemoved:(id)a0;
- (void)featureApplicationChanged:(id)a0;
- (void)featureApplicationAdded:(id)a0;
- (id)activeInboxMessages;
- (id)inboxMessageWithIdentifier:(id)a0;
- (id)expiredInboxMessages;
- (void)updateInboxWithCompletion:(id /* block */)a0;
- (void)_updateInboxMessages;
- (void)_accountUserInvitationsCompletion:(id /* block */)a0;

@end
