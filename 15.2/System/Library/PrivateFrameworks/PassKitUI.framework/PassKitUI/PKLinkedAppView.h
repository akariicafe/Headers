@class UILabel, NSString, NSArray, NSURL, PKContinuousButton, UIImageView, PKLinkedAppUserRatingView, UIActivityIndicatorView, PKLinkedApplication, UIColor;

@interface PKLinkedAppView : PKTableViewCell <PKLinkedApplicationObserver> {
    UIImageView *_iconView;
    UILabel *_appName;
    PKContinuousButton *_viewButton;
    UILabel *_appPublisher;
    PKLinkedAppUserRatingView *_userRatingView;
    UILabel *_price;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_loadingLabel;
}

@property (readonly, nonatomic) PKLinkedApplication *linkedApplication;
@property (copy, nonatomic) NSArray *storeIDs;
@property (copy, nonatomic) NSURL *appLaunchURL;
@property (retain, nonatomic) UIColor *mainLabelColor;
@property (retain, nonatomic) UIColor *subTextLabelColor;
@property (retain, nonatomic) UIColor *buttonBackgroundColor;
@property (retain, nonatomic) UIColor *buttonTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setApplicationIcon:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_cleanupViews;
- (void)setApplicationName:(id)a0;
- (void)setPrice:(id)a0;
- (void)_buttonPressed:(id)a0;
- (void).cxx_destruct;
- (void)_layoutLoadingView;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)setLoadingText:(id)a0;
- (void)reloadApplicationStateIfNecessary;
- (void)linkedApplicationDidChangeState:(id)a0;
- (id)initWithStoreIDs:(id)a0 systemAppBundleIdentifiers:(id)a1 appLaunchURL:(id)a2 reuseIdentifier:(id)a3;
- (id)initWithLinkedApplication:(id)a0 reuseIdentifier:(id)a1;
- (void)_layoutLockupView;
- (void)_layoutNotAvailableView;

@end
