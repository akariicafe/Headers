@class NSTimer, IMHandle, NSDate;
@protocol IMTypingTimerDelegate;

@interface IMTypingTimer : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) id<IMTypingTimerDelegate> delegate;
@property (readonly, copy, nonatomic) IMHandle *handle;
@property (readonly, nonatomic) NSDate *beginDate;
@property (readonly, nonatomic) double timeoutInterval;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (BOOL)shouldAdjustTimeoutIntervalForBeginDate;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithHandle:(id)a0 beginDate:(id)a1 timeoutInterval:(double)a2 delegate:(id)a3;
- (void)timerCallback;
- (void)triggerTimeout;

@end
