@class _GCDevicePhysicalInputBase;

@interface _GCDevicePhysicalInputElementsCollection : GCPhysicalInputElementCollection {
    _GCDevicePhysicalInputBase *_implementation;
}

- (id)retain;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (id)elementAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (unsigned long long)retainCount;
- (id)elementForAlias:(id)a0;

@end
