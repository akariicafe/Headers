@class MRVirtualVoiceInputDeviceDescriptor;

@interface MRRegisterVoiceInputDeviceMessage : MRProtocolMessage {
    MRVirtualVoiceInputDeviceDescriptor *_descriptor;
}

@property (readonly, nonatomic) MRVirtualVoiceInputDeviceDescriptor *descriptor;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithDescriptor:(id)a0;

@end
