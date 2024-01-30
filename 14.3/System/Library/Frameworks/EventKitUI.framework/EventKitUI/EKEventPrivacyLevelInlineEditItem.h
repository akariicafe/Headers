@interface EKEventPrivacyLevelInlineEditItem : EKEventEditItem {
    BOOL _originalSwitchState;
    BOOL _currentSwitchState;
}

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)footerTitle;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (BOOL)forceTableReloadOnSave;
- (double)footerHeightForWidth:(double)a0;
- (BOOL)shouldAppearWithVisibility:(int)a0;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)a0;
- (BOOL)isInline;
- (BOOL)requiresReconfigurationOnSave;
- (void)_switchChanged:(id)a0;

@end
