@interface WANetworkEventType : NSObject <AADataType>

@property (readonly, nonatomic) long long networkEventType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithNetworkEventType:(long long)a0;

@end
