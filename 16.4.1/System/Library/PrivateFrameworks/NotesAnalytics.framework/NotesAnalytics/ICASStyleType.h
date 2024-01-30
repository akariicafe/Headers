@interface ICASStyleType : NSObject <AADataType>

@property (readonly, nonatomic) long long styleType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithStyleType:(long long)a0;

@end
