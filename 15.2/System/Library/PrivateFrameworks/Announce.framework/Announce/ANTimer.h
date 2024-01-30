@class NSString, NSObject;
@protocol OS_dispatch_source, OS_os_log;

@interface ANTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) double timeoutValue;
@property (readonly, nonatomic) NSString *label;

+ (id)timerWithLabel:(id)a0 identifier:(id)a1;

- (void)_startTimer;
- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (void)reset;
- (id)initWithLabel:(id)a0 identifier:(id)a1;
- (void)_createAndStartTimerWithQueue:(id)a0 handler:(id /* block */)a1;
- (void)startWithValue:(double)a0 queue:(id)a1 handler:(id /* block */)a2;

@end
