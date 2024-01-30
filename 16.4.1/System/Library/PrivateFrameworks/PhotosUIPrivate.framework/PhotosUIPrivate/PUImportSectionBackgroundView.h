@class UIColor, UIView;

@interface PUImportSectionBackgroundView : UICollectionReusableView

@property (retain, nonatomic) UIView *bottomStrokeView;
@property (nonatomic) BOOL needsBottomStrokeViewUpdate;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) UIColor *bottomStrokeColor;

- (void)applyLayoutAttributes:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (BOOL)needsStroke;
- (void)setNeedsBottomStrokeViewUpdate;
- (void)updateBottomStrokeViewIfNeeded;

@end
