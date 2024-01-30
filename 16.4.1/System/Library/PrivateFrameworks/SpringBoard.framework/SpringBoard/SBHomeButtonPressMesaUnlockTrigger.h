@interface SBHomeButtonPressMesaUnlockTrigger : SBMesaUnlockTrigger {
    BOOL _menuButtonDown;
    BOOL _primed;
}

- (void)screenOff;
- (id)succinctDescriptionBuilder;
- (id)description;
- (BOOL)bioUnlock;
- (void)menuButtonDown;
- (void)menuButtonUp;
- (void)significantUserInteractionOccurred;

@end
