@class PDAnimationTarget;

@interface PDTimeCondition : NSObject {
    BOOL mHasDelay;
    int mDelay;
    BOOL mHasTriggerEvent;
    int mTriggerEvent;
    PDAnimationTarget *mTarget;
}

- (int)delay;
- (id)target;
- (void)setDelay:(int)a0;
- (id)description;
- (int)triggerEvent;
- (void)setTriggerEvent:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasDelay;
- (void)setTarget:(id)a0;
- (BOOL)hasTriggerEvent;
- (int)writeDelay;

@end
