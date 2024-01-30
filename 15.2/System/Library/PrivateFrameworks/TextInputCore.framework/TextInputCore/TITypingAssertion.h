@class NSTimer, NSMutableSet, PSPointerClientController;

@interface TITypingAssertion : NSObject {
    BOOL _active;
    NSMutableSet *_restingPathIndices;
}

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) PSPointerClientController *pointerClientController;

+ (id)sharedTypingAssertion;

- (void)restTouchStartWithPathIndex:(long long)a0;
- (void)timerFired:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)__restingPathIndices;
- (void)touchWithDuration:(double)a0 reason:(long long)a1;
- (void)touchWithReason:(long long)a0;
- (void)restResetTouches;
- (void)dealloc;
- (void)restTouchEndWithPathIndex:(long long)a0;
- (void)_sbsSetTypingActive:(BOOL)a0;

@end
