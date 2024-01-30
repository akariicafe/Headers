@class NSArray, SignedDuration, DeviceQuery;

@interface SkipTimeIntent : INIntent

@property (copy, nonatomic) NSArray *devices;
@property (copy, nonatomic) SignedDuration *duration;
@property (copy, nonatomic) NSArray *deviceContext;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) DeviceQuery *deviceQuery;

@end
