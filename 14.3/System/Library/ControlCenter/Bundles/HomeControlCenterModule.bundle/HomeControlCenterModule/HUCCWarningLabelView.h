@class UILabel, UIVisualEffectView, NSArray;

@interface HUCCWarningLabelView : UIView

@property (retain, nonatomic) UILabel *warningLabel;
@property (retain, nonatomic) UIVisualEffectView *vibrancyEffectView;
@property (retain, nonatomic) NSArray *constraints;

- (id)init;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)updateWithContentViewState:(unsigned long long)a0 currentPage:(unsigned long long)a1;

@end
