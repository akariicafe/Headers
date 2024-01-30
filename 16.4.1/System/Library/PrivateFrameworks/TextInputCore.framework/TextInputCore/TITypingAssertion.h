@class NSTimer, NSMutableSet, PSPointerClientController;

@interface TITypingAssertion : NSObject {
    BOOL _active;
    NSMutableSet *_restingPathIndices;
}

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) PSPointerClientController *pointerClientController;

+ (id)sharedTypingAssertion;

- (void)timerFired:(id)a0;
- (void)restTouchStartWithPathIndex:(long long)a0;
- (void)touchWithReason:(long long)a0;
- (void)touchWithDuration:(double)a0 reason:(long long)a1;
- (void)dealloc;
- (id)__restingPathIndices;
- (void)_sbsSetTypingActive:(BOOL)a0;
- (id)init;
- (void)restResetTouches;
- (void).cxx_destruct;
- (void)restTouchEndWithPathIndex:(long long)a0;

@end
