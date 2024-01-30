@interface PDCmdBehavior : PDAnimateBehavior {
    BOOL mHasBehaviorType;
    int mBehaviorType;
}

- (void)setBehaviorType:(int)a0;
- (int)behaviorType;
- (BOOL)hasBehaviorType;

@end
