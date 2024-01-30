@class AVPlayerViewController, NSString, UIImageView, UILabel, AMSUserNotification;
@protocol AMSUIUserNotificationContentDelegate;

@interface AMSUIUserNotificationContentViewController : UIViewController

@property (retain, nonatomic) NSString *audioSessionCategory;
@property (nonatomic) unsigned long long audioSessionCategoryOptions;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) AVPlayerViewController *videoPlayerController;
@property (weak, nonatomic) id<AMSUIUserNotificationContentDelegate> delegate;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } expectedContentSize;
@property (readonly, nonatomic) AMSUserNotification *userNotification;

- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewWillLayoutSubviews;
- (void)imageViewTapped:(id)a0;
- (id)initWithNotification:(id)a0 delegate:(id)a1;
- (void)mediaPause;

@end
