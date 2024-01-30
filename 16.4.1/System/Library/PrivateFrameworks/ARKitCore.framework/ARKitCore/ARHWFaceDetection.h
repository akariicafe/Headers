@interface ARHWFaceDetection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long ID;
@property (nonatomic) double rollAngleInDegrees;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (nonatomic) long long detectionOrientation;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;

+ (id)faceDetectionFromDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToFaceDetection:(id)a0;

@end
