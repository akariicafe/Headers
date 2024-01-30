@class NSString, NSArray, NSMutableArray;

@interface CPLActiveDownloadQueue : NSObject {
    NSMutableArray *_transferTasks;
    NSMutableArray *_transportTasks;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic, getter=isFIFOQueue) BOOL FIFOQueue;
@property (readonly, nonatomic) unsigned long long maximumBatchSize;
@property (readonly, nonatomic) long long coalescingInterval;
@property (readonly, nonatomic) id /* block */ groupConstructor;
@property (readonly, nonatomic) BOOL isHighPriority;
@property (readonly, nonatomic) unsigned long long countOfTransferTasks;
@property (readonly, nonatomic) NSArray *allTransferTasks;
@property (readonly, nonatomic) unsigned long long maximumConcurrentTransportTasks;
@property (readonly, nonatomic) unsigned long long countOfTransportTasks;
@property (readonly, nonatomic) unsigned long long countOfTransferTasksInTransportTasks;

- (id)dequeueLastTransportTask;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 FIFOQueue:(BOOL)a2 maximumBatchSize:(unsigned long long)a3 maximumConcurrentTransportTasks:(unsigned long long)a4 coalescingInterval:(long long)a5 groupConstructor:(id /* block */)a6;
- (void)removeAllTransferTasks;
- (void)removeTransferTask:(id)a0;
- (void)addTransportTask:(id)a0;
- (void)addTransferTask:(id)a0;
- (id)status;
- (void).cxx_destruct;
- (id)dequeueBatchOfTransferTasksDequeuedSize:(unsigned long long *)a0;
- (void)removeTransportTask:(id)a0;

@end
