@class NSString;
@protocol CNScheduler;

@interface CNQualityOfServiceSchedulerDecorator : NSObject <CNScheduler>

@property (readonly, nonatomic) id<CNScheduler> scheduler;
@property (readonly, nonatomic) unsigned long long qualityOfService;
@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1 qualityOfService:(unsigned long long)a2;
- (id)performCancelableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (void)performBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)performCancelableBlock:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithScheduler:(id)a0 qualityOfService:(unsigned long long)a1;

@end
