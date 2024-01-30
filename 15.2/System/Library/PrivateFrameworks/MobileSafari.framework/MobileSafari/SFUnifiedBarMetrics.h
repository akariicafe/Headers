@class UITraitCollection;

@interface SFUnifiedBarMetrics : NSObject {
    UITraitCollection *_traitCollection;
}

@property (class, readonly, nonatomic) double defaultItemHeight;
@property (class, readonly, nonatomic) double itemSpacing;
@property (class, readonly, nonatomic) double minimumItemSpacing;
@property (class, readonly, nonatomic) double cutoutBorderWidth;
@property (class, readonly, nonatomic) double minimumSquishScale;
@property (class, readonly, nonatomic) double separatorWidth;
@property (class, readonly, nonatomic) double squishedBarHeight;
@property (class, readonly, nonatomic) double transitioningItemScale;

@property (nonatomic) long long metricsCategory;
@property (readonly, nonatomic) double itemCornerRadius;
@property (readonly, nonatomic) double itemHeight;
@property (readonly, nonatomic) double leadingTabIconInset;
@property (readonly, nonatomic) double squishedBarHeight;
@property (readonly, nonatomic) double tabCloseButtonWidth;

- (id)initWithTraitCollection:(id)a0;
- (void).cxx_destruct;
- (double)_scaledValueForValue:(double)a0;
- (void)_updateMetrics;
- (BOOL)updateWithTraitCollection:(id)a0;
- (BOOL)_updateWithContentSizeCategory:(id)a0 legibilityWeight:(long long)a1;

@end
