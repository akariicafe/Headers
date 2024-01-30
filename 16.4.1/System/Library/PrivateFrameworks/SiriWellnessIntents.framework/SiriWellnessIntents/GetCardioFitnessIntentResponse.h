@interface GetCardioFitnessIntentResponse : INIntentResponse

@property (nonatomic) long long cardioFitnessLevel;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
