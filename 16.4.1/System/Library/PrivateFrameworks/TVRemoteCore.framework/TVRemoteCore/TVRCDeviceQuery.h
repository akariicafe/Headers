@class NSSet;
@protocol TVRCDeviceQueryDelegate;

@interface TVRCDeviceQuery : NSObject

@property (weak, nonatomic) id<TVRCDeviceQueryDelegate> delegate;
@property (readonly, copy, nonatomic) NSSet *devices;

+ (void)_allDiscoveredDevicesDidUpdate:(id)a0;
+ (id)_allDiscoveredDevices;
+ (void)fetchActiveEndpointUIDWithCompletion:(id /* block */)a0;
+ (void)getConnectionStatusToDeviceWithIdentifier:(id)a0 completion:(id /* block */)a1;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void).cxx_destruct;

@end
