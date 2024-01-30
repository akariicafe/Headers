@class MRVirtualTouchDeviceDescriptor;

@interface MRRegisterHIDDeviceMessage : MRProtocolMessage {
    MRVirtualTouchDeviceDescriptor *_deviceDescriptor;
}

@property (readonly, copy, nonatomic) MRVirtualTouchDeviceDescriptor *deviceDescriptor;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithDeviceDescriptor:(id)a0;

@end
