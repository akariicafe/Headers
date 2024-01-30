@interface CBColorSample : NSObject

@property (readonly, nonatomic) double lux;
@property (readonly, nonatomic) struct { double x; double y; } xy;
@property (readonly, nonatomic) struct { double X; double Y; double Z; } XYZ;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } Lab;
@property (readonly, nonatomic) double CCT;
@property (readonly, nonatomic) long long colorBin;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long type;

- (id)init;
- (id)description;
- (id)initWithHIDEvent:(struct __IOHIDEvent { } *)a0;
- (double)CCTDifferenceWith:(id)a0;
- (double)LuxDifferenceWith:(id)a0;
- (void)setXYZ:(struct { double x0; double x1; double x2; })a0;
- (double)colorDeltaEWith:(id)a0;
- (id)copyDataInDictionary;
- (void)fillInChromaticity;
- (void)fillInTristimulus;
- (id)initWithChromaticity:(struct { double x0; double x1; })a0 illuminance:(double)a1 andTempterature:(double)a2;
- (id)initWithTristimulus:(struct { double x0; double x1; double x2; })a0 illuminance:(double)a1 andTempterature:(double)a2;
- (void)setXy:(struct { double x0; double x1; })a0;

@end
