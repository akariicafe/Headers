@class TVRCDevice;

@interface TVRCDeviceEventManager : NSObject

@property (retain, nonatomic) TVRCDevice *device;
@property (copy, nonatomic) id /* block */ eventResponseHandler;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 responseHandler:(id /* block */)a1;
- (void)sendEvent:(id)a0 options:(id)a1;

@end
