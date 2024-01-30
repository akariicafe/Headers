@class NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface AMSUIWebFlowTimeout : NSObject

@property (copy, nonatomic) id /* block */ enqueuedBlock;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) double timeout;
@property (nonatomic) double timeRemaining;

+ (id)timeoutWithTimeout:(double)a0 queue:(id)a1 block:(id /* block */)a2;

- (void)pause;
- (void)start;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithTimeout:(double)a0 queue:(id)a1 block:(id /* block */)a2;

@end
