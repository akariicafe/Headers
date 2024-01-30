@class MNActiveRouteInfo;

@interface _MNTrackedAlternateRoute : NSObject

@property (retain, nonatomic) MNActiveRouteInfo *alternateRoute;
@property (retain, nonatomic) MNActiveRouteInfo *mainRoute;
@property (nonatomic) struct { unsigned int index; float offset; } divergenceCoordinate;

- (void).cxx_destruct;

@end
