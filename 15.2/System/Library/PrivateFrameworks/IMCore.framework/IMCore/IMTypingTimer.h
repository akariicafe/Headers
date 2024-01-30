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

- (void).cxx_destruct;
- (void)invalidate;
- (void)timerCallback;
- (void)triggerTimeout;
- (id)initWithHandle:(id)a0 beginDate:(id)a1 timeoutInterval:(double)a2 delegate:(id)a3;

@end
