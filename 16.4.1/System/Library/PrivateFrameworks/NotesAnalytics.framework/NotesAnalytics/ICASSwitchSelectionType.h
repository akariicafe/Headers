@interface ICASSwitchSelectionType : NSObject <AADataType>

@property (readonly, nonatomic) long long switchSelectionType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithSwitchSelectionType:(long long)a0;

@end
