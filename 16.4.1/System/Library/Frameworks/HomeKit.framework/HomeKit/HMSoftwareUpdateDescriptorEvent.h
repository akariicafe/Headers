@class HMSoftwareUpdateDescriptor;

@interface HMSoftwareUpdateDescriptorEvent : HMEEvent

@property (readonly) HMSoftwareUpdateDescriptor *descriptor;

- (id)encodedData;
- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0 eventSource:(id)a1 eventTimestamp:(double)a2;

@end
