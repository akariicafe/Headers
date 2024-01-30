@class NSString, NRDevice, NSObject;
@protocol OS_dispatch_queue;

@interface NRActiveDeviceAssertion : NSObject {
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
    NRDevice *_device;
}

@property (readonly, nonatomic) BOOL isActive;
@property (readonly, retain, nonatomic) NRDevice *device;

- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;

@end
