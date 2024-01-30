@interface VideoAttributes : NSObject <NSCopying, NSCoding>

@property (nonatomic) struct CGSize { double width; double height; } ratio;
@property (nonatomic) int orientation;
@property (nonatomic) int camera;
@property (nonatomic) BOOL cameraSwitching;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (nonatomic) BOOL videoSourceScreen;
@property (nonatomic) BOOL videoMirrored;

+ (id)videoAttributesWithVideoAttributes:(id)a0;
+ (int)videoAttributeCameraForCameraUID:(id)a0;
+ (id)cameraUIDForVideoAttributeCamera:(int)a0;

- (id)initWithEncodedDictionary:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyEncodedDictionary;
- (id)initWithCoder:(id)a0;
- (id)initWithCameraStatusBits:(unsigned char)a0 aspectRatio:(struct CGSize { double x0; double x1; })a1 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)description;
- (BOOL)isEqualToVideoAttributes:(id)a0;
- (void)decodeFromNSDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
