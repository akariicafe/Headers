@interface EKEventPrivacyLevelInlineEditItem : EKEventEditItem {
    BOOL _originalSwitchState;
    BOOL _currentSwitchState;
}

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)_switchChanged:(id)a0;
- (id)footerTitle;
- (BOOL)isInline;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)a0;
- (double)footerHeightForWidth:(double)a0;
- (BOOL)forceTableReloadOnSave;
- (BOOL)requiresReconfigurationOnSave;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (BOOL)shouldAppearWithVisibility:(int)a0;

@end
