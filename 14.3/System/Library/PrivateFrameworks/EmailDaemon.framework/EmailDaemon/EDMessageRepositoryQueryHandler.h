@class NSString, EFQuery, EDMessagePersistence, EMObjectID, EDPersistenceHookRegistry, NSSet, EFLocked;
@protocol EMMessageListItemQueryResultsObserver;

@interface EDMessageRepositoryQueryHandler : NSObject <EFCancelable, EDMessageRepositoryQueryHandler> {
    struct atomic_flag { _Atomic BOOL _Value; } _didStart;
}

@property (retain, nonatomic) EFLocked *summaryLoadersMapTable;
@property (readonly, copy, nonatomic) EFQuery *query;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly, nonatomic) id<EMMessageListItemQueryResultsObserver> resultsObserver;
@property (readonly, nonatomic) EMObjectID *observationIdentifier;
@property (readonly, copy, nonatomic) NSSet *mailboxes;
@property (readonly, nonatomic) long long dateSortOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)test_tearDown;
- (void).cxx_destruct;
- (void)dealloc;
- (id)messageReconciliationQueries;
- (id)threadReconciliationQueries;
- (void)start;
- (void)tearDown;
- (void)requestSummaryForMessageObjectID:(id)a0;
- (id)initWithQuery:(id)a0 messagePersistence:(id)a1 hookRegistry:(id)a2 observer:(id)a3 observationIdentifier:(id)a4;
- (id)_distinctObjectIDs:(id)a0 queryHandlerLog:(id)a1;

@end
