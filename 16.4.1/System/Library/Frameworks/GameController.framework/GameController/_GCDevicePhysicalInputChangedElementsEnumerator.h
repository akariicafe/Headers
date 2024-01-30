@class _GCDevicePhysicalInputTransaction;

@interface _GCDevicePhysicalInputChangedElementsEnumerator : NSEnumerator {
    _GCDevicePhysicalInputTransaction *_implementation;
    unsigned long long _currentIndex;
}

- (id)nextObject;
- (id)retain;
- (oneway void)release;

@end
