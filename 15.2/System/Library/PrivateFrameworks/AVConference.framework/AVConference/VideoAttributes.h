@interface VideoAttributes : NSObject <NSCopying, NSCoding>

@property (nonatomic) struct CGSize { double width; double height; } ratio;
@property (nonatomic) int orientation;
@property (nonatomic) int camera;
@property (nonatomic) BOOL cameraSwitching;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (nonatomic) BOOL videoSourceScreen;
@property (nonatomic) BOOL videoMirrored;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } framePresentationTime;
@property (nonatomic) float scaleFactor;

+ (id)videoAttributesWithVideoAttributes:(id)a0;
+ (int)videoAttributeCameraForCameraUID:(id)a0;
+ (id)cameraUIDForVideoAttributeCamera:(int)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCameraStatusBits:(unsigned char)a0 aspectRatio:(struct CGSize { double x0; double x1; })a1 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 scaleFactor:(float)a3;
- (void)decodeFromNSDictionary:(id)a0;
- (id)copyEncodedDictionary;
- (id)initWithEncodedDictionary:(id)a0;
- (void)updateCameraStatusBits:(unsigned char)a0;
- (id)description;
- (BOOL)isEqualToVideoAttributes:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct __CFDictionary { } *)newEncodedCFDictionary;

@end
