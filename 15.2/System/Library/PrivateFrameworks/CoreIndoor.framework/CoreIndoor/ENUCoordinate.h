@interface ENUCoordinate : NSObject

@property (nonatomic) double east;
@property (nonatomic) double north;
@property (nonatomic) double up;

+ (id)fromLatLonOrigin:(id)a0 andEcefOrigin:(id)a1 andEcefPoint:(id)a2;

- (void)setFromLatLonOrigin:(id)a0 andEcefOrigin:(id)a1 andEcefPoint:(id)a2;
- (id)initWithEast:(double)a0 north:(double)a1 up:(double)a2;
- (id)init;

@end
