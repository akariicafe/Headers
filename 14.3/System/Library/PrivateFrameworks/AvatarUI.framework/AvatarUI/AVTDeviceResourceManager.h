@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AVTUILogger;

@interface AVTDeviceResourceManager : NSObject <AVTDeviceResourceConsumerDelegate>

@property (readonly, nonatomic) NSMutableArray *consumers;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)consumer:(id)a0 willConsumeRenderingResourceForEstimatedDuration:(double)a1;
- (void).cxx_destruct;
- (id)initWithLogger:(id)a0 lockProvider:(id /* block */)a1;
- (void)registerConsumer:(id)a0;
- (void)performWorkWithConsumers:(id /* block */)a0;
- (void)unregisterConsumer:(id)a0;

@end
