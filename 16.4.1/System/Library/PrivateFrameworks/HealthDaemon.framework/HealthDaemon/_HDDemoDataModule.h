@class NSOperationQueue, NSDate, NSObject;
@protocol OS_dispatch_source, _HDDemoDataModuleDelegate;

@interface _HDDemoDataModule : NSObject {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_source> *_timerSource;
    NSDate *_lastFireDate;
}

@property (readonly, nonatomic) double nextFireInterval;
@property (weak, nonatomic) id<_HDDemoDataModuleDelegate> delegate;

- (void)stop;
- (void)start;
- (id)initWithOperationQueue:(id)a0;
- (void).cxx_destruct;
- (void)scheduleNextFire;
- (void)timerDidFireWithInterval:(double)a0;

@end
