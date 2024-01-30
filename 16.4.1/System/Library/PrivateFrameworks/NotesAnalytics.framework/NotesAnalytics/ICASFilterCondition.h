@interface ICASFilterCondition : NSObject <AADataType>

@property (readonly, nonatomic) long long filterCondition;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithFilterCondition:(long long)a0;

@end
