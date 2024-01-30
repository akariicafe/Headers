@class AVTAvatarFetchRequest, NSString, AVTObservableAvatarStore, AVTAvatarStore, NSObject, NSMutableArray, NSPointerArray, NSNotificationCenter;
@protocol OS_dispatch_queue, AVTUILogger, NSObject;

@interface AVTAvatarRecordDataSource : NSObject <AVTAvatarStoreDelegate, AVTAvatarRecordDataSourceInternal, AVTAvatarRecordDataSource>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) AVTAvatarStore *underlyingStore;
@property (readonly, nonatomic) AVTObservableAvatarStore *backingStore;
@property (readonly, nonatomic) AVTAvatarFetchRequest *fetchRequest;
@property (retain, nonatomic) NSMutableArray *nts_recordStorage;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSPointerArray *nts_observers;
@property (retain, nonatomic) id<NSObject> nts_changeNotificationObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadRecordsWithStore:(id)a0 request:(id)a1 logger:(id)a2;
+ (id)sortedRecordsEditableFirstReverseOrder:(id)a0;
+ (unsigned long long)indexForInsertingRecord:(id)a0 inRecords:(id)a1;
+ (unsigned long long)indexForInsertingDuplicateRecord:(id)a0 original:(id)a1 inRecords:(id)a2;
+ (id)defaultUIDataSourceWithDomainIdentifier:(id)a0;

- (id)initWithRecordStore:(id)a0 fetchRequest:(id)a1 environment:(id)a2;
- (id)initWithRecordStore:(id)a0 fetchRequest:(id)a1 callbackQueue:(id)a2 environment:(id)a3;
- (id)initWithRecordStore:(id)a0 fetchRequest:(id)a1 callbackQueue:(id)a2 logger:(id)a3 notificationCenter:(id)a4;
- (void)avatarStoreDidChange:(id)a0;
- (BOOL)areRecordsLoaded;
- (void)performObserversWork:(id /* block */)a0;
- (void)enumerateObserversRespondingToSelector:(SEL)a0 withBlock:(id /* block */)a1;
- (void)performSyncWorkWithRecords:(id /* block */)a0;
- (id)indexesOfRecordsPassingTest:(id /* block */)a0;
- (void)store:(id)a0 didSaveAvatar:(id)a1 postCompletionHandler:(id /* block */)a2;
- (id)indexSetForEditableRecords;
- (void)addPriorityObserver:(id)a0;
- (void)store:(id)a0 didDeleteAvatarWithIdentifier:(id)a1 postCompletionHandler:(id /* block */)a2;
- (void)store:(id)a0 didCreateDuplicateAvatar:(id)a1 forOriginal:(id)a2 postCompletionHandler:(id /* block */)a3;
- (id)initWithRecordStore:(id)a0 fetchRequest:(id)a1;
- (void)flushRecordsForEnteringBackground;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (id)internalRecordStore;
- (id)recordAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfRecords;
- (unsigned long long)indexOfRecordPassingTest:(id /* block */)a0;
- (id)recordStore;

@end
