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
- (void)removeObserver:(id)a0;
- (id)recordStore;
- (void).cxx_destruct;
- (id)internalRecordStore;
- (id)recordAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfRecords;
- (unsigned long long)indexOfRecordPassingTest:(id /* block */)a0;
- (void)addPriorityObserver:(id)a0;
- (id)indexesOfRecordsPassingTest:(id /* block */)a0;
- (id)indexSetForEditableRecords;
- (id)initWithRecordStore:(id)a0 fetchRequest:(id)a1 environment:(id)a2;
- (void)flushRecordsForEnteringBackground;
- (id)initWithRecordStore:(id)a0 fetchRequest:(id)a1;

@end
