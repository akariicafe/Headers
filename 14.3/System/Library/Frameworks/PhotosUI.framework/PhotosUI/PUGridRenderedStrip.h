@class NSArray, PUSectionedGridLayout, UIView;
@protocol PUGridRenderedStripDataSource;

@interface PUGridRenderedStrip : UICollectionReusableView

@property (nonatomic, setter=_setNeedsRendering:) BOOL _needsRendering;
@property (readonly, nonatomic) UIView *_sideExtendedContentView;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double itemContentScale;
@property (nonatomic) struct CGSize { double width; double height; } interItemSpacing;
@property (nonatomic) double leftContentInset;
@property (nonatomic) int backgroundColorValue;
@property (retain, nonatomic) NSArray *itemIndexPaths;
@property (readonly, nonatomic) long long visualSectionIndex;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } visualItemRange;
@property (weak, nonatomic) id<PUGridRenderedStripDataSource> dataSource;
@property (weak, nonatomic) PUSectionedGridLayout *layout;
@property (readonly, nonatomic) long long numberOfColumns;
@property (nonatomic) unsigned long long contentExtenderType;
@property (nonatomic) BOOL extendsToTop;
@property (readonly, nonatomic) UIView *topContentView;

- (void)_render;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setNeedsRendering;
- (void)setVisualSectionIndex:(long long)a0 andVisualItemRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_updateExtendedContents;
- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_disableRasterizeInAnimations;

@end
