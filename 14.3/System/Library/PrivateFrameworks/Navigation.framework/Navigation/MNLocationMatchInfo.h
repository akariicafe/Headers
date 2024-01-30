@class NSData;

@interface MNLocationMatchInfo : NSObject

@property (readonly, nonatomic) long long matchQuality;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } matchCoordinate;
@property (readonly, nonatomic) double matchCourse;
@property (readonly, nonatomic) int matchFormOfWay;
@property (readonly, nonatomic) int matchRoadClass;
@property (readonly, nonatomic) BOOL matchShifted;
@property (readonly, nonatomic) NSData *matchDataArray;

- (id)initWithMatchQuality:(long long)a0 matchCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 matchCourse:(double)a2 matchFormOfWay:(int)a3 matchRoadClass:(int)a4 matchShifted:(BOOL)a5 matchDataArray:(id)a6;
- (void).cxx_destruct;

@end
