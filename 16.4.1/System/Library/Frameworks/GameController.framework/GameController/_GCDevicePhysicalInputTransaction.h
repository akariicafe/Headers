@class _GCDevicePhysicalInput, _GCDevicePhysicalInputChangedElementsEnumerator;

@interface _GCDevicePhysicalInputTransaction : _GCDevicePhysicalInputBase {
    _GCDevicePhysicalInput *_implementation;
    double _lastEventTimestamp;
    _GCDevicePhysicalInputChangedElementsEnumerator *_changedElements;
    BOOL _updateContextsValid;
}

- (BOOL)allowsWeakReference;
- (BOOL)isSnapshot;
- (void)dealloc;
- (id)description;
- (double)lastEventTimestamp;

@end
