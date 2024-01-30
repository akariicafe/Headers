@class PGMeaningfulEventMatchingCriteria, PGGraphMomentNode, NSDateInterval;
@protocol CLSTimeLocationTuple;

@interface PGPublicEventMatchingOptions : NSObject

@property (readonly, nonatomic) id<CLSTimeLocationTuple> timeLocationTuple;
@property (readonly, nonatomic) PGGraphMomentNode *momentNode;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinates;
@property (readonly, nonatomic) NSDateInterval *actualAttendanceDateInterval;
@property (readonly, nonatomic) NSDateInterval *expandedAttendanceDateInterval;
@property (readonly, nonatomic) PGMeaningfulEventMatchingCriteria *matchingCriteria;

- (void).cxx_destruct;
- (id)initWithTimeLocationTuple:(id)a0 momentNode:(id)a1;
- (void)_createAttendanceDateIntervals;

@end
