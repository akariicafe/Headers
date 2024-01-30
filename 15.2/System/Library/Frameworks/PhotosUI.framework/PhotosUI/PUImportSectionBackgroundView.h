@class UIColor, UIView;

@interface PUImportSectionBackgroundView : UICollectionReusableView

@property (retain, nonatomic) UIView *bottomStrokeView;
@property (nonatomic) BOOL needsBottomStrokeViewUpdate;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) UIColor *bottomStrokeColor;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)a0;
- (void)setNeedsBottomStrokeViewUpdate;
- (void)updateBottomStrokeViewIfNeeded;
- (BOOL)needsStroke;

@end
