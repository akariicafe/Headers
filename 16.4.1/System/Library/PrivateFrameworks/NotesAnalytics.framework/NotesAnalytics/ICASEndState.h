@interface ICASEndState : NSObject <AADataType>

@property (readonly, nonatomic) long long endState;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithEndState:(long long)a0;

@end
