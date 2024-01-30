@class NSDictionary;
@protocol MTLTexture;

@interface StagingBuffer : NSObject

@property (retain) id<MTLTexture> luma;
@property (retain) id<MTLTexture> chroma;
@property (retain) id<MTLTexture> weights;
@property struct { void /* unknown type, empty encoding */ columns[3]; } homographyToReference;
@property struct { void /* unknown type, empty encoding */ columns[3]; } atlasHomography;
@property (retain) NSDictionary *metadata;
@property BOOL dirty;

- (void).cxx_destruct;
- (float)overlapWithAtlasHomography:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithContext:(id)a0 stagingWidth:(unsigned long long)a1 stagingHeight:(unsigned long long)a2 homography:(struct { void /* unknown type, empty encoding */ x0[3]; })a3 atlasHomography:(struct { void /* unknown type, empty encoding */ x0[3]; })a4;

@end
