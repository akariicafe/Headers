@class _UIKBRTTimerBlock, NSObject;
@protocol OS_dispatch_queue;

@interface _UIKBRTTouchInfo : _UIKBRTObject

@property (readonly, nonatomic) _UIKBRTTimerBlock *timer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (readonly, nonatomic) _UIKBRTTouchInfo *previousTouch;
@property (readonly, nonatomic) _UIKBRTTouchInfo *nextTouch;
@property (readonly, nonatomic) double originalTimestamp;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } originalTouchPoint;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } currentTouchPoint;
@property (readonly, nonatomic) double maximumRadius;
@property (readonly, nonatomic) double currentTimestamp;
@property (readonly, nonatomic) double originalZGradient;
@property (readonly, nonatomic) double currentZGradient;
@property (nonatomic) char currentTouchState;
@property (nonatomic) char preRuleTouchState;
@property (readonly, nonatomic) id touchIdentifier;

+ (id)touchDict;
+ (id)createTouchInfoForTouch:(id)a0 withIdentifier:(id)a1 canLogTouch:(BOOL)a2;
+ (id)touchInfoForTouch:(id)a0 withIdentifier:(id)a1;
+ (void)setTouchInfo:(id)a0 forIdentifier:(id)a1;

- (void)cleanup;
- (void)invalidateTimer;
- (void).cxx_destruct;
- (id)setOfTouchesToIgnoreWhenSettingTouchInfo:(id)a0 toState:(char)a1;
- (void)setTimerWithTimeInterval:(double)a0 onQueue:(id)a1 do:(id /* block */)a2;
- (BOOL)willChangeTouchInfo:(id)a0 toState:(char)a1;
- (void)updateTouch:(id)a0;
- (void)fireTimerNow;
- (id)initWithTouch:(id)a0 withIdentifier:(id)a1 canLogTouch:(BOOL)a2;
- (void)dealloc;

@end
