@interface ICASPasswordType : NSObject <AADataType>

@property (readonly, nonatomic) long long passwordType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithPasswordType:(long long)a0;

@end
