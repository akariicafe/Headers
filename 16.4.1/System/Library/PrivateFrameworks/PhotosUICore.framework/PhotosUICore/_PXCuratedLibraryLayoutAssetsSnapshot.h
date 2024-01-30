@class NSDictionary, PXAssetsDataSource;
@protocol NSCopying;

@interface _PXCuratedLibraryLayoutAssetsSnapshot : NSObject {
    PXAssetsDataSource *_dataSource;
    NSDictionary *_spriteSnapshotIndexByAssetIdentifier;
    long long _spriteSnapshotsCount;
    long long _spriteSnapshotsCapacity;
    struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; float x1; BOOL x2; } *_spriteSnapshots;
}

@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (retain, nonatomic) id<NSCopying> dominantAssetIdentifier;
@property (readonly, nonatomic) long long zoomLevel;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fullyVisibleRect;

- (id)initWithLayout:(id)a0;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; float x1; BOOL x2; })spriteSnapshotForAssetWithIdentifier:(id)a0;
- (void)enumerateAssetIdentifiersUsingBlock:(id /* block */)a0;
- (long long)_addSpriteSnapshot:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; float x1; BOOL x2; })a0;
- (void)enumerateAssetInfoForGeometries:(const struct { struct { double x0; double x1; double x2; } x0; } *)a0 styles:(const struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a1 infos:(const struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a2 count:(unsigned int)a3 options:(unsigned long long)a4 usingBlock:(id /* block */)a5;
- (void)dealloc;
- (id)assetIdentifierForAssetReference:(id)a0;
- (void).cxx_destruct;

@end
