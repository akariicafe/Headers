@interface HKInteractiveChartCardioFitnessData : HKInteractiveChartSinglePointData

@property (nonatomic) long long biologicalSex;
@property (nonatomic) long long age;
@property (nonatomic) long long classification;
@property (nonatomic) unsigned long long sampleCount;

- (id)description;

@end
