@class CAMZoomButton, NSArray, UIImageView, NSMutableArray;

@interface CAMZoomButtonPlatter : UIView

@property (readonly, nonatomic) UIImageView *_platterBackgroundView;
@property (readonly, nonatomic) NSMutableArray *_allButtons;
@property (readonly, nonatomic) unsigned long long buttonCount;
@property (nonatomic) double zoomFactor;
@property (readonly, nonatomic) CAMZoomButton *zoomFactorButton;
@property (copy, nonatomic) NSArray *zoomPoints;
@property (readonly, nonatomic) NSArray *zoomFactors;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (nonatomic) long long buttonAccessoryState;
@property (nonatomic) long long orientation;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_updateForContentSize;
- (void)layoutSubviews;
- (void)_updateButtonAccessoryAnimated:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setCollapsed:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateBackgroundAnimated:(BOOL)a0;
- (id)_createPlatterImageForContentSize:(id)a0;
- (id)_createZoomButton;
- (id)_indexesForChanges:(id)a0;
- (struct CGSize { double x0; double x1; })_intrinsicContentSizeForButtonCount:(unsigned long long)a0;
- (void)_updateButtonsAnimated:(BOOL)a0;
- (id)baseZoomPointForButton:(id)a0;
- (id)nearestZoomButtonForTouch:(id)a0;
- (void)setButtonAccessoryState:(long long)a0 animated:(BOOL)a1;
- (void)setZoomFactor:(double)a0 animated:(BOOL)a1;
- (void)setZoomPoints:(id)a0 animated:(BOOL)a1;

@end
