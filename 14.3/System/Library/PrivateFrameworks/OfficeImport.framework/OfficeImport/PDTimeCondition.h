@class PDAnimationTarget;

@interface PDTimeCondition : NSObject {
    BOOL mHasDelay;
    int mDelay;
    BOOL mHasTriggerEvent;
    int mTriggerEvent;
    PDAnimationTarget *mTarget;
}

- (void)setDelay:(int)a0;
- (int)triggerEvent;
- (int)delay;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasDelay;
- (id)description;
- (id)target;
- (void)setTriggerEvent:(int)a0;
- (void)setTarget:(id)a0;
- (BOOL)hasTriggerEvent;
- (int)writeDelay;

@end
