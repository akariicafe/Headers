@class NSString, CPSButton;

@interface CPSPermissionView : UIView <UITextViewDelegate> {
    CPSButton *_permissionButton;
    NSString *_appName;
    BOOL _requestsNotificationPermission;
    BOOL _requestsLocationConfirmationPermission;
    BOOL _permissionTextNeedsUpdate;
}

@property (copy, nonatomic) id /* block */ optionsAction;
@property (nonatomic) BOOL notificationPermissionEnabled;
@property (nonatomic) BOOL locationConfirmationPermissionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)permissionButtonTapped:(id)a0;
- (void)transitionViewAnimated:(BOOL)a0;
- (void)toggleNotificationPermission;
- (void)toggleLocationConfirmationPermission;
- (void)setNotificationPermissionEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)setLocationConfirmationPermissionEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)configureWithAppName:(id)a0 requestsNotificationPermission:(BOOL)a1 requestsLocationConfirmationPermission:(BOOL)a2;

@end
