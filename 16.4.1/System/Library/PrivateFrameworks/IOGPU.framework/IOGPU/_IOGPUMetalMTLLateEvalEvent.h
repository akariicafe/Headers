@class NSString, IOGPUMetalDevice;
@protocol MTLDevice;

@interface _IOGPUMetalMTLLateEvalEvent : IOGPUMTLLateEvalEvent <MTLLateEvalEvent> {
    unsigned long long _labelTraceID;
    NSString *_label;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _labelLock;
}

@property (readonly) IOGPUMetalDevice<MTLDevice> *device;
@property (copy) NSString *label;
@property unsigned long long signaledValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0;
- (void)dealloc;
- (id)label;
- (void)setLabel:(id)a0;
- (id)newSharedEventHandle;
- (void)notifyListener:(id)a0 atValue:(unsigned long long)a1 block:(id /* block */)a2;
- (id)retainedLabel;

@end
