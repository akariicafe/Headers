@interface ICASStartState : NSObject <AADataType>

@property (readonly, nonatomic) long long startState;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithStartState:(long long)a0;

@end
