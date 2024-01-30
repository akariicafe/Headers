@class NSString, SGDSqlHarvestQueueStore, SGDHarvestQueueFileReader, NSObject, SGDHarvestQueueFileWriter;
@protocol OS_dispatch_queue;

@interface SGDHarvestQueueOnDisk : SGDHarvestQueue {
    NSString *_dirPath;
    SGDSqlHarvestQueueStore *_store;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_backingQueue;
    SGDHarvestQueueFileWriter *_writerHighPriority;
    SGDHarvestQueueFileWriter *_writerLowPriority;
    SGDHarvestQueueFileReader *_reader;
    long long _idCounter;
    _Atomic unsigned long long _count;
    _Atomic unsigned long long _countHighPriority;
    _Atomic unsigned long long _maxQueueItems;
    _Atomic unsigned long long _pendingWrites;
    _Atomic unsigned long long _maxPendingWrites;
    id _lockStateChangeToken;
}

@property (nonatomic) unsigned long long maxQueueItems;
@property (nonatomic) unsigned long long maxPendingWrites;

- (void)writePermafail:(id)a0;
- (void)popBySourceKey:(id)a0 messageId:(id)a1 callback:(id /* block */)a2;
- (void)close;
- (void).cxx_destruct;
- (void)_processPoppedItemResult:(struct { BOOL x0; BOOL x1; BOOL x2; int x3; int x4; int x5; struct { int x0; int x1; unsigned int x2; } x6; struct { int x0; int x1; unsigned int x2; } x7; struct { int x0; int x1; unsigned int x2; } x8; long long x9; BOOL x10; double x11; int x12; })a0 callback:(id /* block */)a1;
- (void)_trimPermafailDirectory;
- (void)pop:(id /* block */)a0;
- (void)dealloc;
- (void)_flushFilesWhileUnlocked;
- (void)_unlinkFileWithIdLocked:(int)a0;
- (id)initWithDirectory:(id)a0;
- (void)popByCustomPriorityCriteria:(unsigned char)a0 callback:(id /* block */)a1;
- (void)_read:(struct { int x0; int x1; unsigned int x2; })a0 fileId:(int)a1 callback:(id /* block */)a2;
- (void)addItemWithSourceKey:(id)a0 messageId:(id)a1 highPriority:(BOOL)a2 customPriorityCriteria:(unsigned char)a3 item:(id)a4 callback:(id /* block */)a5;
- (void)countHighPriorityItems:(unsigned long long *)a0 lowPriorityItems:(unsigned long long *)a1;
- (void)markAsFailedWithId:(long long)a0;
- (void)popHighPriority:(id /* block */)a0;
- (void)popByItemId:(long long)a0 callback:(id /* block */)a1;
- (void)addItemWithSourceKey:(id)a0 messageId:(id)a1 highPriority:(BOOL)a2 customPriorityCriteria:(unsigned char)a3 receivedOnPower:(BOOL)a4 receivedTime:(double)a5 storageReason:(int)a6 item:(id)a7 callback:(id /* block */)a8;
- (unsigned long long)count;
- (void)deleteWithItemId:(long long)a0 fileId:(int)a1;
- (void)_openFilesForProcessingWhileLocked;
- (void)performMaintenanceTasks;

@end
