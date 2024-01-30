@class NSString, NSDate;

@interface LogBloodPressureIntentResponse : INIntentResponse

@property (nonatomic) double systolic;
@property (nonatomic) double diastolic;
@property (nonatomic, copy) NSString *unit;
@property (nonatomic, copy) NSDate *sampleStart;
@property (nonatomic, copy) NSDate *sampleEnd;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
