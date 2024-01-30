@class AMSMetrics, NSString, UIImageView, AVPlayerViewController, UILabel, AMSUserNotification;
@protocol AMPUserNotificationContentDelegate;

@interface AMPUserNotificationContentViewController : UIViewController

@property (retain, nonatomic) NSString *audioSessionCategory;
@property (nonatomic) unsigned long long audioSessionCategoryOptions;
@property (nonatomic) BOOL hasAppeared;
@property (nonatomic) BOOL hasPlayedVideo;
@property (readonly, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AMSMetrics *metrics;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) AVPlayerViewController *videoPlayerController;
@property (readonly, nonatomic) AMSUserNotification *userNotification;
@property (weak, nonatomic) id<AMPUserNotificationContentDelegate> delegate;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } expectedContentSize;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNotification:(id)a0 delegate:(id)a1;
- (void)mediaPause;
- (void)imageViewTapped:(id)a0;

@end
