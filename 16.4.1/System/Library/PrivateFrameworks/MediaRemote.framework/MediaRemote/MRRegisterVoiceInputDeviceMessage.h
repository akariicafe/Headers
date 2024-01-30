@class MRVirtualVoiceInputDeviceDescriptor;

@interface MRRegisterVoiceInputDeviceMessage : MRProtocolMessage {
    MRVirtualVoiceInputDeviceDescriptor *_descriptor;
}

@property (readonly, nonatomic) MRVirtualVoiceInputDeviceDescriptor *descriptor;

- (id)initWithDescriptor:(id)a0;
- (unsigned long long)type;
- (void).cxx_destruct;

@end
