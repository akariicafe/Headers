@class GEOStep, GEOTransitStep;

@interface _GEOTransitRouteStepInfo : NSObject

@property (nonatomic) long long routeSegmentType;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } pointRange;
@property (retain, nonatomic) GEOTransitStep *transitStep;
@property (nonatomic) unsigned int duration;
@property (retain, nonatomic) GEOStep *walkingStep;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } maneuverPointRange;
@property (readonly, nonatomic) double distance;

- (unsigned long long)numPoints;
- (void).cxx_destruct;

@end
