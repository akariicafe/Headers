@class CLKDevice;

@interface NTKCaliforniaStyleTransitionHandler : NSObject

@property (retain, nonatomic) CLKDevice *device;
@property (nonatomic) double fraction;
@property (nonatomic) unsigned long long dial;
@property (nonatomic) struct CGPoint { double x; double y; } centerPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } *fadeOutHourMarkersCenterPoints;
@property (nonatomic) struct CGPoint { double x0; double x1; } *fadeInHourMarkersCenterPoints;
@property (nonatomic) unsigned long long hourMarkersCount;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (double)opacityForMarkerAtIndex:(unsigned long long)a0 markerType:(unsigned long long)a1;
- (struct CGPoint { double x0; double x1; })positionForMarkerAtIndex:(unsigned long long)a0 markerType:(unsigned long long)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForMarkerAtIndex:(unsigned long long)a0 markerType:(unsigned long long)a1;
- (double)animationProgressForHourMarkerAtIndex:(unsigned long long)a0 markerType:(unsigned long long)a1;
- (double)animationStartTimeForMarkerAtIndex:(unsigned long long)a0 markerType:(unsigned long long)a1;
- (double)animationDurationForHourMarkerAtIndex:(unsigned long long)a0 markerType:(unsigned long long)a1;

@end
