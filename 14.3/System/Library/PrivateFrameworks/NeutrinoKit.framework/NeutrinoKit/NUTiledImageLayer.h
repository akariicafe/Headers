@class NUImageGeometry, NSMutableArray, NSString;
@protocol NUTextureImage;

@interface NUTiledImageLayer : CALayer <CALayerDelegate>

@property (retain) id<NUTextureImage> _image;
@property (retain) NUImageGeometry *_geometry;
@property (retain) NSMutableArray *_tileLayers;
@property (retain) id<NUTextureImage> image;
@property (retain) NUImageGeometry *geometry;
@property (readonly, nonatomic) BOOL nu_contentsAreFlipped;
@property (retain) struct CGColor { } *debugColor;
@property (nonatomic) struct { long long x; long long y; } validRegionInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultActionForKey:(id)a0;

- (void)layoutSublayers;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateSublayers;

@end
