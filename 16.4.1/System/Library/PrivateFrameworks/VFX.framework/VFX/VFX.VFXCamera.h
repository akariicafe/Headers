@class NSString;

@interface VFX.VFXCamera : NSObject {
    void /* unknown type, empty encoding */ instance;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic) BOOL isOrthographic;
@property (nonatomic, readonly) struct { void /* unknown type, empty encoding */ x0[4]; } worldTransform;
@property (nonatomic) void /* unknown type, empty encoding */ position;
@property (nonatomic) struct { } orientation;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } projection;
@property (nonatomic, readonly) float fieldOfView;
@property (nonatomic, readonly) float focalLength;
@property (nonatomic, readonly) float focusDistance;
@property (nonatomic, readonly) float sensorSize;
@property (nonatomic, readonly) float fStop;
@property (nonatomic, readonly) float exposure;
@property (nonatomic, readonly) float aperture;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ filmOffset;
@property (nonatomic, readonly) float scale;
@property (nonatomic, readonly) float zNear;
@property (nonatomic, readonly) float zFar;
@property (nonatomic, readonly) BOOL reverseZ;
@property (nonatomic, readonly) char projectionDirection;

- (BOOL)isEqual:(id)a0;
- (id)init;

@end
