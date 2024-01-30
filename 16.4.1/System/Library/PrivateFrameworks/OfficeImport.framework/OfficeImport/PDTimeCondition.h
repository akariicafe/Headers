@class PDAnimationTarget;

@interface PDTimeCondition : NSObject {
    BOOL mHasDelay;
    int mDelay;
    BOOL mHasTriggerEvent;
    int mTriggerEvent;
    PDAnimationTarget *mTarget;
}

- (void)setTriggerEvent:(int)a0;
- (void)setDelay:(int)a0;
- (int)triggerEvent;
- (int)delay;
- (id)target;
- (id)init;
- (id)description;
- (void)setTarget:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasDelay;
- (BOOL)hasTriggerEvent;
- (int)writeDelay;

@end
