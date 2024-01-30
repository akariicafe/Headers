@interface PDCmdBehavior : PDAnimateBehavior {
    BOOL mHasBehaviorType;
    int mBehaviorType;
}

- (int)behaviorType;
- (void)setBehaviorType:(int)a0;
- (BOOL)hasBehaviorType;

@end
