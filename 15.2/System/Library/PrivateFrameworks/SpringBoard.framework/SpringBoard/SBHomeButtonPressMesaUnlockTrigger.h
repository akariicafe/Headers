@interface SBHomeButtonPressMesaUnlockTrigger : SBMesaUnlockTrigger {
    BOOL _menuButtonDown;
    BOOL _primed;
}

- (void)screenOff;
- (void)menuButtonUp;
- (void)menuButtonDown;
- (void)significantUserInteractionOccurred;
- (id)description;
- (BOOL)bioUnlock;
- (id)succinctDescriptionBuilder;

@end
