@protocol MTLDevice, NSObject;

@interface TCMPSDeviceManager : NSObject {
    id<NSObject> _deviceObserver;
}

@property (retain) id<MTLDevice> preferredDevice;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)shouldPreferDevice:(id)a0 overDevice:(id)a1;
- (void)setPreferredDeviceFromDevices:(id)a0;

@end
