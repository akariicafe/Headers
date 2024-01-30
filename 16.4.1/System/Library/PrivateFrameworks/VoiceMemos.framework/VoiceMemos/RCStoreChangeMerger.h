@class NSEntityDescription, NSString, NSPersistentHistoryToken, NSPersistentStore, NSDate, NSMutableArray, NSManagedObjectContext;
@protocol RCStoreChangeMergerDelegate;

@interface RCStoreChangeMerger : NSObject {
    NSPersistentStore *_store;
    NSString *_transactionAuthor;
    NSPersistentHistoryToken *_currentHistoryToken;
    NSPersistentHistoryToken *_latestHistoryToken;
    NSMutableArray *_transactionsBuffer;
    NSManagedObjectContext *_viewContext;
    NSDate *_changeNotificationDate;
    NSEntityDescription *_cloudRecordingEntity;
}

@property (weak, nonatomic) id<RCStoreChangeMergerDelegate> delegate;

- (id)initWithPersistentStore:(id)a0 transactionAuthor:(id)a1 startingToken:(id)a2 viewContext:(id)a3;
- (void)handleChange:(id)a0;
- (id)_nextTransactionAfterToken:(id)a0 context:(id)a1 error:(id *)a2;
- (BOOL)_isRelevantTransaction:(id)a0;
- (void).cxx_destruct;

@end
