@class UIFontDescriptor;
@protocol VideosExtrasMainMenuSectionMetricsDataSource;

@interface VideosExtrasMainMenuSectionMetrics : NSObject {
    double _fittingWidth;
    BOOL _needsUpdate;
    long long _itemCount;
    struct CGSize { double x0; double x1; } *_calculatedSizes;
}

@property (weak, nonatomic) id<VideosExtrasMainMenuSectionMetricsDataSource> dataSource;
@property (retain, nonatomic) UIFontDescriptor *desiredFontDescriptor;
@property (retain, nonatomic) UIFontDescriptor *minimumFontDescriptor;
@property (nonatomic) double desiredCellSpacing;
@property (nonatomic) double minimumCellSpacing;
@property (nonatomic) double desiredWidth;
@property (readonly, nonatomic) UIFontDescriptor *fittingFontDescriptor;
@property (readonly, nonatomic) double fittingCellSpacing;
@property (readonly, nonatomic) struct CGSize { double width; double height; } totalFittingSize;

- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateAllMetrics;
- (void)_recalculateSizes;
- (struct CGSize { double x0; double x1; })_horizontalFittingSizeForFontDescriptor:(id)a0 gutterSize:(double)a1 itemCount:(long long)a2 itemSizes:(out struct CGSize { double x0; double x1; } *)a3;
- (void)setFittingWidth:(double)a0;
- (struct CGSize { double x0; double x1; })sizeForCellAtIndex:(long long)a0;
- (void)updateSizes;

@end
