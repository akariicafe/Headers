@interface _MNRouteHintSegment : NSObject

@property (nonatomic) unsigned long long roadSegmentID;
@property (nonatomic) struct { double latitude; double longitude; } startCoordinate;
@property (nonatomic) struct { double latitude; double longitude; } endCoordinate;

@end
