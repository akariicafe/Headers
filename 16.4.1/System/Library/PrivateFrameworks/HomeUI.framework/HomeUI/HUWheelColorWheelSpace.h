@class NSString;

@interface HUWheelColorWheelSpace : NSObject <HUColorWheelSpace>

@property (readonly, nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long mirroringBiasAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct { double x0; double x1; double x2; double x3; })colorForCoordinate:(struct { double x0; double x1; })a0;
- (struct { double x0; double x1; })coordinateForColor:(struct { double x0; double x1; double x2; double x3; })a0 isValid:(out BOOL *)a1;

@end
