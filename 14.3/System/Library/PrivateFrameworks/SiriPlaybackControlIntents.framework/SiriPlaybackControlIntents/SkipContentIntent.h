@class NSArray, DeviceQuery;

@interface SkipContentIntent : INIntent

@property (copy, nonatomic) NSArray *devices;
@property (nonatomic) long long direction;
@property (copy, nonatomic) NSArray *deviceContext;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) DeviceQuery *deviceQuery;

@end
