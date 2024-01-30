@class NSOperationQueue, NSObject, NSDate;
@protocol OS_dispatch_source, _HDDemoDataModuleDelegate;

@interface _HDDemoDataModule : NSObject {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_source> *_timerSource;
}

@property (readonly, nonatomic) NSDate *lastFireDate;
@property (readonly, nonatomic) double nextFireInterval;
@property (weak, nonatomic) id<_HDDemoDataModuleDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithOperationQueue:(id)a0;
- (void)stop;
- (void)start;
- (void)scheduleNextFire;
- (void)scheduleNextFireWithInterval:(double)a0;
- (void)timerDidFireWithInterval:(double)a0;
- (void)handleDataObject:(id)a0;

@end
