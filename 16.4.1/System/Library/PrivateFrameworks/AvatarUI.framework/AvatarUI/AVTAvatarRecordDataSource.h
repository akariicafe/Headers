@class AVTPAvatarRecordDataSource, AVTAvatarStore, NSString;

@interface AVTAvatarRecordDataSource : NSObject <AVTAvatarRecordDataSource>

@property (retain, nonatomic) AVTPAvatarRecordDataSource *persistenceAvatarRecordDataSource;
@property (retain, nonatomic) AVTAvatarStore *avatarStore;
@property (retain, nonatomic) AVTAvatarStore *observableWrappedAvatarStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultUIDataSourceWithDomainIdentifier:(id)a0;

- (void)addObserver:(id)a0;
- (unsigned long long)numberOfRecords;
- (void)removeObserver:(id)a0;
- (void)addPriorityObserver:(id)a0;
- (void).cxx_destruct;
- (id)recordStore;
- (id)recordAtIndex:(unsigned long long)a0;
- (void)flushRecordsForEnteringBackground;
- (unsigned long long)indexOfRecordPassingTest:(id /* block */)a0;
- (id)indexSetForEditableRecords;
- (id)indexesOfRecordsPassingTest:(id /* block */)a0;
- (id)initWithRecordStore:(id)a0 fetchRequest:(id)a1;
- (id)initWithRecordStore:(id)a0 fetchRequest:(id)a1 environment:(id)a2;
- (id)internalRecordStore;

@end
