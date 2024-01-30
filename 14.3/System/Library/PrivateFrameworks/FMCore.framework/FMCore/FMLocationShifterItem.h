@class NSError, NSDate;

@interface FMLocationShifterItem : NSObject

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic) double accuracy;
@property (nonatomic) BOOL shifted;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) id context;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 accuracy:(double)a1 timestamp:(id)a2 context:(id)a3;

@end
