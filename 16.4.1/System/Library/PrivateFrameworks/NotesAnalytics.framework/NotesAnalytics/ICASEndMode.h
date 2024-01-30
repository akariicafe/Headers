@interface ICASEndMode : NSObject <AADataType>

@property (readonly, nonatomic) long long endMode;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithEndMode:(long long)a0;

@end
