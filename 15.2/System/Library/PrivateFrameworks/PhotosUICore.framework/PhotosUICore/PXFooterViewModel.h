@class NSString, UIView;

@interface PXFooterViewModel : PXObservable

@property (readonly, nonatomic) long long animatedIconMode;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *extendedTitle;
@property (readonly, nonatomic) NSString *subtitle1;
@property (readonly, nonatomic) NSString *subtitle2;
@property (readonly, nonatomic) BOOL isPaused;
@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) long long actionStyle;
@property (readonly, nonatomic) NSString *actionTitle;
@property (readonly, nonatomic) NSString *actionConfirmationAlertTitle;
@property (readonly, nonatomic) NSString *actionConfirmationAlertSubtitle;
@property (readonly, nonatomic) NSString *actionConfirmationAlertButtonTitle;
@property (readonly, copy, nonatomic) id /* block */ action;
@property (readonly, nonatomic) UIView *accessoryView;
@property (readonly, nonatomic) UIView *topAccessoryView;
@property (readonly, nonatomic) UIView *filterView;

- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)a0;
- (void)setAction:(id /* block */)a0;
- (void)setTopAccessoryView:(id)a0;
- (void)setSubtitle1:(id)a0;
- (void)setActionConfirmationAlertSubtitle:(id)a0;
- (void)footerAnimationCrossedGridCycleBoundary;
- (void)setSubtitle2:(id)a0;
- (void)setFilterView:(id)a0;
- (void)setIsPaused:(BOOL)a0;
- (void)setProgress:(float)a0;
- (void)setExtendedTitle:(id)a0;
- (void).cxx_destruct;
- (void)setAccessoryView:(id)a0;
- (id)init;
- (void)setActionTitle:(id)a0;
- (void)setAnimatedIconMode:(long long)a0;
- (void)setActionConfirmationAlertButtonTitle:(id)a0;
- (void)setTitle:(id)a0;
- (void)setActionConfirmationAlertTitle:(id)a0;

@end
