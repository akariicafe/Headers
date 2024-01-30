@class CRFDRBaseDeviceHandler;

@interface CRFDRDeviceController : NSObject {
    CRFDRBaseDeviceHandler *handler;
}

+ (id)sharedSingleton;

- (id)_init;
- (id)init;
- (void).cxx_destruct;
- (id)getHandlerForDevice;

@end
