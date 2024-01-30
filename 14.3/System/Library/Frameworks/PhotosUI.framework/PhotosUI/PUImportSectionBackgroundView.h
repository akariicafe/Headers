@class UIColor, UIView;

@interface PUImportSectionBackgroundView : UICollectionReusableView

@property (retain, nonatomic) UIView *bottomStrokeView;
@property (nonatomic) BOOL needsBottomStrokeViewUpdate;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) UIColor *bottomStrokeColor;

- (BOOL)needsStroke;
- (void)setNeedsBottomStrokeViewUpdate;
- (void)updateBottomStrokeViewIfNeeded;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)a0;

@end
