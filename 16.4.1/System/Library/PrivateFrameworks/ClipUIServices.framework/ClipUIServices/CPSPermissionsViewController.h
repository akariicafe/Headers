@class NSString, UIImageView, UIImage, UIView, CPSPermissionItemView;
@protocol CPSPermissionsViewControllerDelegate;

@interface CPSPermissionsViewController : UIViewController <PRXCardContentProviding> {
    NSString *_appName;
    UIImageView *_backgroundImageView;
    UIView *_optionsContainer;
    CPSPermissionItemView *_notificationItemView;
    CPSPermissionItemView *_locationConfirmationItemView;
    BOOL _backgroundImageNeedsUpdate;
}

@property (retain, nonatomic) UIImage *backgroundImage;
@property (weak, nonatomic) id<CPSPermissionsViewControllerDelegate> delegate;
@property (nonatomic) BOOL notificationPermissionEnabled;
@property (nonatomic) BOOL locationConfirmationPermissionEnabled;
@property (readonly, nonatomic) long long cardStyle;
@property (readonly, nonatomic) BOOL allowsPullToDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)doneTapped;
- (id)initWithAppName:(id)a0 backgroundImage:(id)a1;
- (void)setUpOptionsContainer;
- (void)updatePreferredContentSizeForCardWidth:(double)a0;

@end
