@interface ICASContextPath : NSObject <AADataType>

@property (readonly, nonatomic) long long contextPath;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithContextPath:(long long)a0;

@end
