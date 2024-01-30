@interface CHCoachingDiagnosticDataItem : NSObject

@property (nonatomic) double walking;
@property (nonatomic) double automotive;
@property (nonatomic) double cycling;
@property (nonatomic) double running;
@property (nonatomic) double other;
@property (nonatomic) double unknown;
@property (nonatomic) double workout;
@property (nonatomic) double heartRate;
@property (nonatomic) double activeCalories;
@property (nonatomic) double briskMinutes;

- (id)description;

@end
