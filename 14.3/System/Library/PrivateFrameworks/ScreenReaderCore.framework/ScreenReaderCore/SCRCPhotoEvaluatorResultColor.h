@interface SCRCPhotoEvaluatorResultColor : SCRCPhotoEvaluatorResult

@property (readonly, nonatomic) double redLevel;
@property (readonly, nonatomic) double blueLevel;
@property (readonly, nonatomic) double greenLevel;

- (id)humanReadableResult;
- (id)initWithRedLevel:(double)a0 blueLevel:(double)a1 greenLevel:(double)a2;

@end
