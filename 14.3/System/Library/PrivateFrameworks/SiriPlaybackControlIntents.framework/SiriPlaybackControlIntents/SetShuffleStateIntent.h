@class NSArray, DeviceQuery;

@interface SetShuffleStateIntent : INIntent

@property (copy, nonatomic) NSArray *devices;
@property (nonatomic) long long shuffleState;
@property (copy, nonatomic) NSArray *deviceContext;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) DeviceQuery *deviceQuery;

@end
