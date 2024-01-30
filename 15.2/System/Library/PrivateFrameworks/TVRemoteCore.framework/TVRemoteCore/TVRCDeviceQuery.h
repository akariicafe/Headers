@class NSSet;
@protocol TVRCDeviceQueryDelegate;

@interface TVRCDeviceQuery : NSObject

@property (weak, nonatomic) id<TVRCDeviceQueryDelegate> delegate;
@property (readonly, copy, nonatomic) NSSet *devices;

+ (id)_allDiscoveredDevices;
+ (void)_allDiscoveredDevicesDidUpdate:(id)a0;
+ (void)fetchActiveEndpointUIDWithCompletion:(id /* block */)a0;

- (void)start;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;

@end
