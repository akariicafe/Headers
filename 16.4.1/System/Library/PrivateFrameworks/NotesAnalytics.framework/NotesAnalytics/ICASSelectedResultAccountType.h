@interface ICASSelectedResultAccountType : NSObject <AADataType>

@property (readonly, nonatomic) long long selectedResultAccountType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithSelectedResultAccountType:(long long)a0;

@end
