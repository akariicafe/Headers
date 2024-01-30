@interface WAEndReason : NSObject <AADataType>

@property (readonly, nonatomic) long long endReason;

- (id)initWithEndReason:(long long)a0;
- (id)toJsonValueAndReturnError:(id *)a0;

@end
