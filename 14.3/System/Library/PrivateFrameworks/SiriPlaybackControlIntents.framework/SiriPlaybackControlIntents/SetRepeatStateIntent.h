@class NSArray, DeviceQuery;

@interface SetRepeatStateIntent : INIntent

@property (copy, nonatomic) NSArray *devices;
@property (nonatomic) long long repeatState;
@property (copy, nonatomic) NSArray *deviceContext;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) DeviceQuery *deviceQuery;

@end
