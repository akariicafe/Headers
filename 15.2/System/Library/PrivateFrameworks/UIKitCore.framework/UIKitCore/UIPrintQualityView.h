@class UIPrintSegmentedSlider, UILabel, UIPrintQualityOption;

@interface UIPrintQualityView : UIView

@property (retain, nonatomic) UIPrintSegmentedSlider *qualitySlider;
@property (retain, nonatomic) UILabel *draftLabel;
@property (retain, nonatomic) UILabel *normalLabel;
@property (retain, nonatomic) UILabel *bestLabel;
@property (retain, nonatomic) UIPrintQualityOption *qualityPrintOption;

- (void)loadViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 qualityPrintOption:(id)a1;
- (void)qualityChanged:(id)a0;
- (void)updateQuality;

@end
