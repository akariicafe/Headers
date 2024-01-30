@interface ICASSelectedResultType : NSObject <AADataType>

@property (readonly, nonatomic) long long selectedResultType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithSelectedResultType:(long long)a0;

@end
