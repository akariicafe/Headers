@class _GCDevicePhysicalInputBase;

@interface _GCDevicePhysicalInputInitializationContext : NSObject <_GCDevicePhysicalInputViewInitializationContext> {
    struct __CFArray { } *_views;
    id _viewProperties;
    id _viewState;
}

@property (readonly) _GCDevicePhysicalInputBase *implementation;

- (void)dealloc;
- (id)init;
- (unsigned long long)view:(id)a0 allocateObjectSlotForTransaction:(BOOL)a1 withCopyOfValueFromView:(id)a2 slot:(unsigned long long)a3;
- (unsigned long long)view:(id)a0 allocatePrimitiveSlotForTransaction:(BOOL)a1 withCopyOfValueFromView:(id)a2 slot:(unsigned long long)a3;
- (unsigned long long)view:(id)a0 makeReferenceToView:(id)a1;

@end
