@class CAMZoomButton, NSArray, UIImageView, NSString;

@interface CAMZoomButtonPlatter : UIView

@property (readonly, nonatomic) UIImageView *_platterBackgroundView;
@property (readonly, nonatomic) NSArray *_allButtons;
@property (readonly, nonatomic) CAMZoomButton *_zoomButton1;
@property (readonly, nonatomic) CAMZoomButton *_zoomButton2;
@property (readonly, nonatomic) CAMZoomButton *_zoomButton3;
@property (nonatomic) double zoomFactor;
@property (readonly, nonatomic) CAMZoomButton *zoomFactorButton;
@property (copy, nonatomic) NSArray *zoomFactors;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) long long orientation;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setZoomFactor:(double)a0 animated:(BOOL)a1;
- (id)nearestZoomButtonForTouch:(id)a0;
- (double)baseZoomFactorForButton:(id)a0;
- (void)_updateForContentSize;
- (void)_updateButtonsAnimated:(BOOL)a0;
- (id)_createPlatterImageForContentSize:(id)a0;

@end
