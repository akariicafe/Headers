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

- (void)incrementUseCount;
- (BOOL)decrementUseCount;
- (id)_surface;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isShared;
- (int)useCount;
- (BOOL)isInUse;
- (id)initWithFrameRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 contentRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 texture:(id)a2;

@end
