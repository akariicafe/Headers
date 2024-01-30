@class NSDate;

@interface GeodesicDistancePoint : NSObject

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) double geodesicDistance;
@property (readonly) double timeIntervalSinceReferenceDate;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDate:(id)a0 geodesicDistance:(double)a1;

@end
