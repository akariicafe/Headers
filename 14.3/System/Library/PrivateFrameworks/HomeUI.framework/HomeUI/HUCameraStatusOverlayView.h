@class UIColor, NSString, UIImageView, HULegibilityLabel;

@interface HUCameraStatusOverlayView : UIView

@property (retain, nonatomic) HULegibilityLabel *statusLabel;
@property (retain, nonatomic) UIImageView *statusIndicatorImageView;
@property (nonatomic) BOOL didUpdateConstraints;
@property (retain, nonatomic) UIImageView *alertBadge;
@property (copy, nonatomic) NSString *statusString;
@property (retain, nonatomic) UIColor *statusColor;
@property (retain, nonatomic) NSString *statusImageName;
@property (nonatomic) BOOL isDisplayingForSingleCamera;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_chevronImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateStatusForPlaybackEngine:(id)a0;
- (void)updateStatusLabelBounds;
- (void)setBadgeStatus:(unsigned long long)a0;
- (id)_exclamationImage;

@end
