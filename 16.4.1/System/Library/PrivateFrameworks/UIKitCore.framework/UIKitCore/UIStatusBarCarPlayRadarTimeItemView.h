@interface UIStatusBarCarPlayRadarTimeItemView : UIStatusBarCarPlayTimeItemView {
    BOOL _isInternalInstall;
    BOOL _radarItemEnabled;
    BOOL _currentlyGatheringLogs;
}

- (id)contentsImage;
- (long long)buttonType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canBecomeFocused;
- (void)dealloc;
- (void)_gatheringLogsDidChangeStatusNotification:(id)a0;
- (BOOL)_showRadarButtonForInternalInstalls;
- (id)_timeImageSet;
- (BOOL)allowsUserInteraction;
- (id)highlightImage;
- (BOOL)showsTouchWhenHighlighted;
- (BOOL)usesAdvancedActions;

@end
