@class NSString;
@protocol MTLTexture;

@interface NUTextureTileAdapter : NSObject <NUTextureTile>

@property (readonly, nonatomic) id<MTLTexture> texture;
@property (readonly, nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } frameRect;
@property (readonly, nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } contentRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isInUse;
- (id)init;
- (int)useCount;
- (BOOL)isShared;
- (void).cxx_destruct;
- (id)_surface;
- (BOOL)decrementUseCount;
- (void)incrementUseCount;
- (id)initWithFrameRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 contentRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 texture:(id)a2;

@end
