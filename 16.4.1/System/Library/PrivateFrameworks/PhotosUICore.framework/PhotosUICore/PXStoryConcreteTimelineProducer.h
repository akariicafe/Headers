@class NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface PXStoryConcreteTimelineProducer : NSObject <PXStoryTimelineProducer>

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) double initialProductionTimeLimit;
@property (nonatomic) long long initialProductionCountLimit;
@property (nonatomic) double subsequentProductionTimeLimit;
@property (nonatomic) long long subsequentProductionCountLimit;
@property (nonatomic) double subsequentProductionSimulatedDelay;

- (id)init;
- (void).cxx_destruct;
- (id)requestTimelineWithConfiguration:(id)a0 options:(unsigned long long)a1 resultHandler:(id /* block */)a2;

@end
