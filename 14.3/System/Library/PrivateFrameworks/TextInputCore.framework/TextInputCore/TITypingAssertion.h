@class NSTimer, NSMutableSet, PSPointerClientController;

@interface TITypingAssertion : NSObject {
    BOOL _active;
    NSMutableSet *_restingPathIndices;
}

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) PSPointerClientController *pointerClientController;

+ (id)sharedTypingAssertion;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)timerFired:(id)a0;
- (void)touchWithReason:(long long)a0;
- (void)restResetTouches;
- (void)restTouchStartWithPathIndex:(long long)a0;
- (void)restTouchEndWithPathIndex:(long long)a0;
- (id)__restingPathIndices;
- (void)touchWithDuration:(double)a0 reason:(long long)a1;
- (void)_sbsSetTypingActive:(BOOL)a0;

@end
