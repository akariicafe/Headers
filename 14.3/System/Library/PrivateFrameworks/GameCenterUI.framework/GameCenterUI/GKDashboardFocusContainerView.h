@class UIView;

@interface GKDashboardFocusContainerView : UIView

@property (nonatomic) UIView *focusView;

- (BOOL)canBecomeFocused;
- (id)preferredFocusEnvironments;

@end
