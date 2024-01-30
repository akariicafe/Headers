@class AVAsset;

@interface ISAsset : NSObject {
    id _UIImage;
}

@property (readonly, copy, nonatomic) AVAsset *videoAsset;
@property (readonly, nonatomic) struct CGImage { } *photo;
@property (readonly, nonatomic) double photoTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } photoCMTime;
@property (readonly, nonatomic) int photoEXIFOrientation;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) BOOL hasColorAdjustments;

+ (id)assetForURL:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithVideoAsset:(id)a0 UIImage:(id)a1 photoTime:(double)a2 photoEXIFOrientation:(int)a3 options:(unsigned long long)a4;
- (id)initWithVideoAsset:(id)a0 photo:(struct CGImage { } *)a1 photoTime:(double)a2 photoEXIFOrientation:(int)a3;
- (id)initWithVideoAsset:(id)a0 photo:(struct CGImage { } *)a1 photoTime:(double)a2 options:(unsigned long long)a3;
- (id)initWithVideoAsset:(id)a0 photo:(struct CGImage { } *)a1 photoTime:(double)a2;
- (id)initWithVideoAsset:(id)a0 photo:(struct CGImage { } *)a1 photoTime:(double)a2 photoEXIFOrientation:(int)a3 options:(unsigned long long)a4;
- (void)resetAVObjects;

@end
