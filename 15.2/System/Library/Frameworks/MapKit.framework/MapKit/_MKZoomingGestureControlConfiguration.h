@class NSString;

@interface _MKZoomingGestureControlConfiguration : NSObject <MKZoomingGestureControlConfiguration, NSCopying>

@property (readonly, nonatomic) double decelerationThreshold;
@property (readonly, nonatomic) double maximumZoomInVelocity;
@property (readonly, nonatomic) double maximumZoomOutVelocity;
@property (readonly, nonatomic) double zoomOutFrictionScale;
@property (readonly, nonatomic) double zoomDraggingResistance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationForCarPlay;
+ (id)configurationForDigitalCrown;
+ (id)defaultConfiguration;

- (id)initWithDecelerationThreshold:(double)a0 maximumZoomInVelocity:(double)a1 maximumZoomOutVelocity:(double)a2 zoomOutFrictionScale:(double)a3 zoomDraggingResistance:(double)a4;
- (id)initWithDecelerationThreshold:(double)a0 maximumZoomInVelocity:(double)a1 maximumZoomOutVelocity:(double)a2 zoomOutFrictionScale:(double)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
