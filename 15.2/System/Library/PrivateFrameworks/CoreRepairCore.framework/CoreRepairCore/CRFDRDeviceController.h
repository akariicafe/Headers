@class CRFDRBaseDeviceHandler;

@interface CRFDRDeviceController : NSObject {
    CRFDRBaseDeviceHandler *handler;
}

+ (id)sharedSingleton;

- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (id)getHandlerForDevice;

@end
