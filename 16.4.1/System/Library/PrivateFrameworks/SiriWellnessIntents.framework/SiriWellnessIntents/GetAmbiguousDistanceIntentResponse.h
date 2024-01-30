@class NSString, NSDate;

@interface GetAmbiguousDistanceIntentResponse : INIntentResponse

@property (nonatomic, copy) NSDate *sampleStartDate;
@property (nonatomic, copy) NSDate *sampleEndDate;
@property (nonatomic) double wheelchairDistance;
@property (nonatomic) double walkRunDistance;
@property (nonatomic, copy) NSString *unit;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
