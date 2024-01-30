@interface GetSleepAnalysisIntentResponse : INIntentResponse

@property (nonatomic) long long daysSummarized;
@property (nonatomic) long long daysWithAsleepData;
@property (nonatomic) double totalInBedDuration;
@property (nonatomic) double totalAsleepDuration;
@property (nonatomic) double averageInBedDuration;
@property (nonatomic) double averageAsleepDuration;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
