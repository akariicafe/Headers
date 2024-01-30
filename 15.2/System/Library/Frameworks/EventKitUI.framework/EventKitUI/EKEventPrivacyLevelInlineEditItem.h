@interface EKEventPrivacyLevelInlineEditItem : EKEventEditItem {
    BOOL _originalSwitchState;
    BOOL _currentSwitchState;
}

- (BOOL)isInline;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)footerTitle;
- (void)_switchChanged:(id)a0;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (BOOL)shouldAppearWithVisibility:(int)a0;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)a0;
- (BOOL)requiresReconfigurationOnSave;
- (BOOL)forceTableReloadOnSave;
- (double)footerHeightForWidth:(double)a0;

@end
