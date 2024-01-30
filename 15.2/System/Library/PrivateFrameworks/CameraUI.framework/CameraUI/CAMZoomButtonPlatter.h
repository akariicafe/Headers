@class UIImageView, NSArray, CAMZoomButton;

@interface CAMZoomButtonPlatter : UIView

@property (readonly, nonatomic) double _zoomButtonPlatterMargin;
@property (readonly, nonatomic) UIImageView *_platterBackgroundView;
@property (readonly, nonatomic) NSArray *_allButtons;
@property (readonly, nonatomic) CAMZoomButton *_defaultZoomButton;
@property (readonly, nonatomic) unsigned long long buttonCount;
@property (nonatomic) double zoomFactor;
@property (readonly, nonatomic) CAMZoomButton *zoomFactorButton;
@property (copy, nonatomic) NSArray *zoomFactors;
@property (nonatomic) long long orientation;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithButtonCount:(unsigned long long)a0;
- (void)setZoomFactor:(double)a0 animated:(BOOL)a1;
- (id)nearestZoomButtonForTouch:(id)a0;
- (double)baseZoomFactorForButton:(id)a0;
- (void)_updateForContentSize;
- (void)_updateButtonsAnimated:(BOOL)a0;
- (id)_createPlatterImageForContentSize:(id)a0;

@end
