@class NSString, IOGPUMetalDevice;
@protocol MTLDevice;

@interface _IOGPUMetalMTLEvent : IOGPUMTLEvent <MTLEvent> {
    unsigned long long _labelTraceID;
    NSString *_label;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _labelLock;
}

@property (readonly) IOGPUMetalDevice<MTLDevice> *device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0;
- (void)dealloc;
- (void)setLabel:(id)a0;
- (id)label;
- (id)retainedLabel;

@end
