@interface SAAdDemographic : NSObject

@property (readonly, nonatomic) int ageGroup;
@property (readonly, nonatomic) float ageGroupConfidence;
@property (readonly, nonatomic) int genderGroup;
@property (readonly, nonatomic) float genderGroupConfidence;

- (id)initWithAgeGroup:(int)a0 ageGroupConfidence:(float)a1 genderGroup:(int)a2 genderGroupConfidence:(float)a3;

@end
