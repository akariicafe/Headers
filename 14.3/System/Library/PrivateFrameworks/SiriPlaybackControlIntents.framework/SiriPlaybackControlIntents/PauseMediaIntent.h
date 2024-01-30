@class NSArray, NSNumber, DeviceQuery;

@interface PauseMediaIntent : INIntent

@property (copy, nonatomic) NSArray *devices;
@property (copy, nonatomic) NSArray *deviceContext;
@property (copy, nonatomic) NSNumber *isDirectInvocation;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) DeviceQuery *deviceQuery;

@end
