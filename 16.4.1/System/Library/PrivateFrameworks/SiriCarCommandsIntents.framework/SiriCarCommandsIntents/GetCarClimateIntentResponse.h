@class NSNumber;

@interface GetCarClimateIntentResponse : INIntentResponse

@property (nonatomic, retain) NSNumber *enabled;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
