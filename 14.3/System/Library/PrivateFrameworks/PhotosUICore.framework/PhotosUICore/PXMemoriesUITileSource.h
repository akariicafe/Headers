@class NSMutableSet, PXPhotoKitUIMediaProvider, PXFeedDateFormatter, PXReusableObjectPool, PXUIScrollViewController, NSIndexSet, NSString;
@protocol PXMemoriesUITileSourceDelegate;

@interface PXMemoriesUITileSource : NSObject <PXReusableObjectPoolDelegate, PXTileSource, PXTilingControllerPreheatHandler> {
    NSMutableSet *_checkedOutTiles;
    struct { BOOL memoryToPreheatForIndexPath; } _delegateRespondsTo;
}

@property (readonly, nonatomic) PXPhotoKitUIMediaProvider *_mediaProvider;
@property (readonly, nonatomic) PXFeedDateFormatter *_dateFormatter;
@property (readonly, nonatomic) unsigned long long _memoriesStyle;
@property (readonly, nonatomic) PXReusableObjectPool *viewTilePool;
@property (readonly, nonatomic) PXUIScrollViewController *scrollViewController;
@property (nonatomic) BOOL canRenderTextAsynchronously;
@property (readonly, nonatomic) NSIndexSet *providingTilesForKinds;
@property (weak, nonatomic) id<PXMemoriesUITileSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_dateFormatterChanged:(id)a0;
- (void *)_tileForIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0 layout:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithScrollViewController:(id)a0 memoriesStyle:(unsigned long long)a1;
- (BOOL)providesTileForIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0;
- (void)_getImageRequester:(id *)a0 title:(id *)a1 subtitle:(id *)a2 forIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a3 dataSource:(id)a4;
- (void)_updateDateLabelTile:(id)a0;
- (void)startPreheatingTilesForIdentifiers:(const struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0 withGeometries:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a1 count:(unsigned long long)a2 context:(void *)a3;
- (void)stopPreheatingTilesForIdentifiers:(const struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0 withGeometries:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a1 count:(unsigned long long)a2 context:(void *)a3;
- (void)reusableObjectPool:(id)a0 didCreateReusableObject:(id)a1;
- (void)reusableObjectPool:(id)a0 didEvictReusableObject:(id)a1;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0 layout:(id)a1;
- (void)checkInTile:(void *)a0 withIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a1;
- (id)_assetsBySizeWithTileIdentifiers:(const struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0 withGeometries:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a1 count:(unsigned long long)a2;

@end
