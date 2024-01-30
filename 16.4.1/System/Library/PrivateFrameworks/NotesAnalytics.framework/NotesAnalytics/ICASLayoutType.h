@interface ICASLayoutType : NSObject <AADataType>

@property (readonly, nonatomic) long long layoutType;

- (id)initWithLayoutType:(long long)a0;
- (id)toJsonValueAndReturnError:(id *)a0;

@end
