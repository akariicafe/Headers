@interface UIStatusBarCarPlayRadarTimeItemView : UIStatusBarCarPlayTimeItemView {
    BOOL _isInternalInstall;
    BOOL _radarItemEnabled;
    BOOL _currentlyGatheringLogs;
}

- (BOOL)canBecomeFocused;
- (long long)buttonType;
- (id)highlightImage;
- (id)_timeImageSet;
- (BOOL)usesAdvancedActions;
- (void)_gatheringLogsDidChangeStatusNotification:(id)a0;
- (BOOL)_showRadarButtonForInternalInstalls;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)contentsImage;
- (BOOL)allowsUserInteraction;
- (BOOL)showsTouchWhenHighlighted;

@end
