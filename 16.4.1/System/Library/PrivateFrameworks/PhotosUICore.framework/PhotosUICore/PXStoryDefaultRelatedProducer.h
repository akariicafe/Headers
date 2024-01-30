@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PXStoryDefaultRelatedProducer : NSObject <PXStoryRelatedProducer>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSMutableArray *activeRequests;
@property (readonly, nonatomic) unsigned long long targetUpNextCount;

+ (id)_relatedResultFromUpNextResult:(id)a0 error:(id)a1;
+ (id)_requestForConfiguration:(id)a0 targetUpNextMemoryCount:(unsigned long long)a1 musicCurationParameters:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id)initWithTargetUpNextCount:(unsigned long long)a0;
- (id)requestConfigurationsRelatedToConfiguration:(id)a0 withOptions:(unsigned long long)a1 musicCurationParameters:(id)a2 resultHandler:(id /* block */)a3;

@end
