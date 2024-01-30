@class NSString;
@protocol CNScheduler;

@interface _CNOffMainThreadScheduler : NSObject <CNScheduler>

@property (readonly, nonatomic) id<CNScheduler> alreadyOffMainThreadScheduler;
@property (readonly, nonatomic) id<CNScheduler> needToGetOffMainThreadScheduler;
@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;

- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1 qualityOfService:(unsigned long long)a2;
- (id)performCancelableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (void)performBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)performCancelableBlock:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0;
- (id)initWithBackgroundScheduler:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
