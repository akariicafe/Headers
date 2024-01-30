@interface ICASSessionType : NSObject <AADataType>

@property (readonly, nonatomic) long long sessionType;

- (id)initWithSessionType:(long long)a0;
- (id)toJsonValueAndReturnError:(id *)a0;

@end
