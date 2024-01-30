@interface SCRCPhotoEvaluatorResultLuminance : SCRCPhotoEvaluatorResult

@property (readonly, nonatomic) double darknessLevel;
@property (readonly, nonatomic) double brightnessLevel;
@property (readonly, nonatomic) double averageLevel;

- (id)humanReadableResult;
- (id)initWithDarknessLevel:(double)a0 brightnessLevel:(double)a1 averageLevel:(double)a2;

@end
