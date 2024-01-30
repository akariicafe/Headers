@class UIImageView, UILabel;

@interface HRElectrocardiogramSessionScreenView : UIView

@property (readonly, nonatomic) BOOL isLargeDevice;
@property (readonly, nonatomic) UIImageView *waveformView;
@property (readonly, nonatomic) UILabel *countdownValueLabel;
@property (readonly, nonatomic) UILabel *countdownUnitLabel;

- (void).cxx_destruct;
- (void)_setUpUI;
- (id)initWithLargeDevice:(BOOL)a0;

@end
