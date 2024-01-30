@interface WAViewAction : NSObject <AADataType>

@property (readonly, nonatomic) long long viewAction;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithViewAction:(long long)a0;

@end
