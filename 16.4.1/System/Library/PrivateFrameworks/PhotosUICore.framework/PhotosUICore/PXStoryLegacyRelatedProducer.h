@class NSObject;
@protocol OS_dispatch_queue;

@interface PXStoryLegacyRelatedProducer : NSObject <PXStoryRelatedProducer>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) unsigned long long targetUpNextCount;

+ (id)_relatedResultForConfiguration:(id)a0 targetUpNextCount:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithTargetUpNextCount:(unsigned long long)a0;
- (id)requestConfigurationsRelatedToConfiguration:(id)a0 withOptions:(unsigned long long)a1 musicCurationParameters:(id)a2 resultHandler:(id /* block */)a3;

@end
