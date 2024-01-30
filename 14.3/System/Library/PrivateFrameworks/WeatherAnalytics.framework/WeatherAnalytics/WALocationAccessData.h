@interface WALocationAccessData : NSObject <AADataType>

@property (readonly, nonatomic) long long locationAccessData;

- (id)initWithLocationAccessData:(long long)a0;
- (id)toJsonValueAndReturnError:(id *)a0;

@end
