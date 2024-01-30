@class NSString;

@interface AXEventPathInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) void *pathWindow;
@property (nonatomic) unsigned char pathIndex;
@property (nonatomic) unsigned char pathIdentity;
@property (nonatomic) struct CGPoint { double x; double y; } pathLocation;
@property (nonatomic) unsigned int pathWindowContextID;
@property (nonatomic) unsigned char pathProximity;
@property (nonatomic) float pathPressure;
@property (nonatomic) float pathMajorRadius;
@property (nonatomic) float pathMinorRadius;
@property (nonatomic) float pathMajorRadiusTolerance;
@property (nonatomic) float pathTwist;
@property (nonatomic) float pathQuality;
@property (nonatomic) float pathDensity;
@property (nonatomic) unsigned int pathEventMask;
@property (nonatomic) float orbValue;
@property (nonatomic) unsigned int transducerType;
@property (nonatomic) float altitude;
@property (nonatomic) float azimuth;
@property (nonatomic) float barrelPressure;
@property (nonatomic) unsigned int willUpdateMask;
@property (nonatomic) unsigned int didUpdateMask;
@property (nonatomic) BOOL shouldSetTouchFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)representationWithPathInfo:(struct { unsigned char x0; unsigned char x1; unsigned char x2; float x3; float x4; struct CGPoint { double x0; double x1; } x5; unsigned int x6; void *x7; } *)a0;

- (void)encodeWithCoder:(id)a0;
- (void)writeToPathInfo:(struct { unsigned char x0; unsigned char x1; unsigned char x2; float x3; float x4; struct CGPoint { double x0; double x1; } x5; unsigned int x6; void *x7; } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)accessibilityEventRepresentationTabularDescription;

@end
