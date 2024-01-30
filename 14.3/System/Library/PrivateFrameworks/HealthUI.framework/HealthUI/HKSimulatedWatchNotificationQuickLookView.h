@class UIColor, NSString, UIImageView, UIImage, UILabel, UIView;

@interface HKSimulatedWatchNotificationQuickLookView : UIView

@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) NSString *titleLabelText;
@property (retain, nonatomic) NSString *detailLabelText;
@property (retain, nonatomic) UIImageView *quickLookIconView;
@property (retain, nonatomic) UILabel *quickLookTitleLabel;
@property (retain, nonatomic) UILabel *quickLookSubtitleLabel;
@property (retain, nonatomic) UIView *quickLookTitleContainer;
@property (retain, nonatomic) UIView *quickLookSubtitleContainer;

- (void).cxx_destruct;
- (void)_setUpSubviews;
- (void)_layoutQuickLook;
- (id)initWithIconImage:(id)a0 titleText:(id)a1 detailText:(id)a2 tintColor:(id)a3;

@end
