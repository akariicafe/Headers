@interface WALocationCondition : NSObject <AADataType>

@property (readonly, nonatomic) long long locationCondition;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithLocationCondition:(long long)a0;

@end
