@interface UIStatusBarCarPlayRadarTimeItemView : UIStatusBarCarPlayTimeItemView {
    BOOL _isInternalInstall;
    BOOL _radarItemEnabled;
    BOOL _currentlyGatheringLogs;
}

- (long long)buttonType;
- (id)contentsImage;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)highlightImage;
- (id)_timeImageSet;
- (BOOL)showsTouchWhenHighlighted;
- (BOOL)usesAdvancedActions;
- (void)_gatheringLogsDidChangeStatusNotification:(id)a0;
- (BOOL)_showRadarButtonForInternalInstalls;
- (BOOL)allowsUserInteraction;
- (void)dealloc;

@end
