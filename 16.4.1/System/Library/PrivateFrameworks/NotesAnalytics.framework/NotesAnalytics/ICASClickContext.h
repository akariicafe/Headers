@interface ICASClickContext : NSObject <AADataType>

@property (readonly, nonatomic) long long clickContext;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithClickContext:(long long)a0;

@end
