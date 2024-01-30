@class NSDate;

@interface NSRESolarEvent : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) NSDate *date;

+ (id)sunsetEvent:(struct CLLocationCoordinate2D { double x0; double x1; })a0 at:(id)a1;
+ (id)sunriseEvent:(struct CLLocationCoordinate2D { double x0; double x1; })a0 at:(id)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 date:(id)a2;

@end
