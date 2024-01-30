@interface ICASResultType : NSObject <AADataType>

@property (readonly, nonatomic) long long resultType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithResultType:(long long)a0;

@end
