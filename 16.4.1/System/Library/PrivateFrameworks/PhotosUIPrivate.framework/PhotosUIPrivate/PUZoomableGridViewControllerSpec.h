@class PUPhotosGridViewControllerSpec;

@interface PUZoomableGridViewControllerSpec : NSObject

@property (retain, nonatomic, setter=_setGridSpec:) PUPhotosGridViewControllerSpec *gridSpec;
@property (readonly, nonatomic) BOOL canDisplayMultipleRightBarButtonItems;
@property (readonly, nonatomic) struct CGSize { double width; double height; } magnifiedImageSize;
@property (nonatomic) double magnifiedYOffset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } magnifiedDragEdgeInsets;
@property (readonly, nonatomic) long long fullMomentsLevelCellFillMode;
@property (readonly, nonatomic) struct CGSize { double width; double height; } fullMomentsLevelThumbnailSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } fullMomentsLevelSectionHeaderHighlightInset;
@property (readonly, nonatomic) long long fullMomentsSectionHeaderStyle;
@property (readonly, nonatomic) long long collectionsLevelCellFillMode;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } collectionsLevelThumbnailSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } collectionsLevelSectionHeaderHighlightInset;
@property (readonly, nonatomic) long long collectionsSectionHeaderStyle;
@property (readonly, nonatomic) long long yearsLevelCellFillMode;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } yearsLevelThumbnailSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } yearsLevelSectionHeaderHighlightInset;
@property (readonly, nonatomic) long long yearsSectionHeaderStyle;

- (void).cxx_destruct;
- (void)configureCollectionsLevelGridLayout:(id)a0 forWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)configureFullMomentsLevelGridLayout:(id)a0 forWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)configureYearsLevelGridLayout:(id)a0 forWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (BOOL)dynamicLayoutEnabled;
- (id)newGridSpec;

@end
