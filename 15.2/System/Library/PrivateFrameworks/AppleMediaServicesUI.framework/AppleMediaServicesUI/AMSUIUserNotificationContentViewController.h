@class AMSMetrics, NSString, UIImageView, AVPlayerViewController, UILabel, AMSUserNotification;
@protocol AMSUIUserNotificationContentDelegate;

@interface AMSUIUserNotificationContentViewController : UIViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSString *audioSessionCategory;
@property (nonatomic) unsigned long long audioSessionCategoryOptions;
@property (nonatomic) BOOL hasAppeared;
@property (nonatomic) BOOL hasPlayedVideo;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) AMSMetrics *metrics;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) AVPlayerViewController *videoPlayerController;
@property (weak, nonatomic) id<AMSUIUserNotificationContentDelegate> delegate;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } expectedContentSize;
@property (readonly, nonatomic) AMSUserNotification *userNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewTapped:(id)a0;
- (id)initWithNotification:(id)a0 delegate:(id)a1;
- (void)mediaPause;

@end
