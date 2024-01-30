@interface SBHomeButtonPressMesaUnlockTrigger : SBMesaUnlockTrigger {
    BOOL _menuButtonDown;
    BOOL _primed;
}

- (void)screenOff;
- (void)menuButtonUp;
- (void)menuButtonDown;
- (void)significantUserInteractionOccurred;
- (id)description;
- (id)succinctDescriptionBuilder;
- (BOOL)bioUnlock;

@end
