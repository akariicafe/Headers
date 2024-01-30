@class NSMutableData;

@interface NUBrushStroke : NSObject <NSCopying, NSMutableCopying> {
    struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } _extent;
    struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } _clipRect;
    NSMutableData *_data;
}

@property (readonly, nonatomic) float radius;
@property (readonly, nonatomic) float softness;
@property (readonly, nonatomic) float opacity;
@property (readonly, nonatomic) long long pressureMode;

+ (id)brushStrokeFromDictionary:(id)a0;
+ (id)dictionaryFromBrushStroke:(id)a0;

- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })clipRect;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (struct { float x0; float x1; float x2; })pointAtIndex:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })extent;
- (long long)pointCount;
- (id)points;
- (void)_initializeWithRadius:(float)a0 softness:(float)a1 opacity:(float)a2 extent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a3 clipRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a4 data:(id)a5 pressureMode:(long long)a6;
- (id)_createPointArrayFromData:(id)a0;
- (id)_createDataFromPointArray:(id)a0;
- (void)_updateExtent;
- (id)ciImageTiled:(BOOL)a0 closed:(BOOL)a1 pressureMode:(long long)a2;
- (void)writeToTIFFAtPath:(id)a0 closed:(BOOL)a1 pressureMode:(long long)a2;

@end
