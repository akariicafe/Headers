@interface ICASErrorStatus : NSObject <AADataType>

@property (readonly, nonatomic) long long errorStatus;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithErrorStatus:(long long)a0;

@end
