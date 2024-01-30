@class PXCMMAssetStatusBadgeTileUserData;
@protocol PXCMMEngineDrivenLayoutDelegate;

@interface PXCMMEngineDrivenLayout : PXEngineDrivenAssetsTilingLayout

@property (readonly, nonatomic) PXCMMAssetStatusBadgeTileUserData *_copiedUserData;
@property (readonly, nonatomic) PXCMMAssetStatusBadgeTileUserData *_failedUserData;
@property (nonatomic) BOOL headerViewIsVisible;
@property (readonly, nonatomic) long long layoutType;
@property (readonly, nonatomic) double headerHeight;
@property (readonly, nonatomic) double bannerHeight;
@property (readonly, nonatomic) double statusFooterHeight;
@property (readonly, nonatomic) double sendBackFooterHeight;
@property (nonatomic) long long placeholderMode;
@property (weak, nonatomic) id<PXCMMEngineDrivenLayoutDelegate> delegate;
@property (nonatomic) BOOL hasFloatingBanner;
@property (nonatomic) BOOL hasFloatingSectionHeaders;
@property (nonatomic) double headerTopInset;
@property (nonatomic) double footerBottomInset;
@property (nonatomic) double headerFooterSideInset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } reviewSafeAreaInsets;

+ (id)_additionalTileKinds;

- (id)initWithDataSource:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_headerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (id)initWithLayoutEngineSnapshot:(id)a0;
- (void)enumerateTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withOptions:(id)a1 usingBlock:(id /* block */)a2;
- (BOOL)getGeometry:(out struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a0 group:(out unsigned long long *)a1 userData:(out id *)a2 forTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a3;
- (BOOL)getAdditionalTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0 group:(unsigned long long *)a1 layoutGeometryKind:(unsigned long long)a2 indexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a3;
- (void)adjustGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a0 forAdditionalTileWithKind:(unsigned long long)a1 indexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a2;
- (void).cxx_destruct;
- (id)initWithLayoutEngineSnapshot:(id)a0 configuration:(id)a1;
- (BOOL)sendBackBannerViewIsVisible:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)updateAssetStatusBadgeTiles;
- (void)_invalidateSectionHeaders;
- (void)_invalidateBanner;
- (struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })_headerTileIdentifier;
- (void)_invalidateStatusFooter;
- (void)_invalidateSendBackFooter;
- (void)_invalidateAssetStatusBadgeTiles;
- (struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })_identifierForUniqueTileWithKind:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_bannerFrame;
- (struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })_bannerTileIdentifier;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_statusFooterFrame;
- (struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })_statusFooterTileIdentifier;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sendBackFooterFrame;
- (struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })_sendBackFooterTileIdentifier;
- (struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })_placeholderTileIdentifier;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sectionHeaderTileFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_placeholderFrame;
- (unsigned long long)_generatorGeometryKindForTileKind:(unsigned long long)a0;
- (unsigned long long)_gridGeneratorGeometryKindForTileKind:(unsigned long long)a0;
- (unsigned long long)_editorialGeneratorGeometryKindForTileKind:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })_preferredSelectionBadgeSize;
- (BOOL)getAdditionalAccessoryTileIdentifier:(out struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0 outGeometry:(out struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a1 group:(out unsigned long long *)a2 userData:(out id *)a3 forTileKind:(unsigned long long)a4 contentTileGeometry:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a5 indexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a6;
- (double)zPositionOffsetForKind:(unsigned long long)a0;
- (BOOL)_getDuplicateTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0 outGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a1 group:(unsigned long long *)a2 userData:(id *)a3 forContentTileGeometry:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a4 indexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a5;
- (BOOL)_getAssetStatusTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0 outGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a1 group:(unsigned long long *)a2 userData:(id *)a3 forContentTileGeometry:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a4 indexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a5;
- (BOOL)_getAdditionalTileIdentifierForGrid:(out struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0 group:(out unsigned long long *)a1 layoutGeometryKind:(long long)a2 indexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a3;
- (BOOL)_getAdditionalTileIdentifierForEditorial:(out struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0 group:(out unsigned long long *)a1 layoutGeometryKind:(long long)a2 indexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a3;
- (void)setVisibleOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)_invalidateHeader;

@end
