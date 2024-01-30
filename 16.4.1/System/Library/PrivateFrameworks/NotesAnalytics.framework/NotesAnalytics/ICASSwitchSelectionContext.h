@interface ICASSwitchSelectionContext : NSObject <AADataType>

@property (readonly, nonatomic) long long switchSelectionContext;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithSwitchSelectionContext:(long long)a0;

@end
