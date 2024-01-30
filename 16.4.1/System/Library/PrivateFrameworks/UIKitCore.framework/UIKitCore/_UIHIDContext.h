@class _UIHIDScaleEventTracker, _UIHIDPathCollection;

@interface _UIHIDContext : NSObject {
    _UIHIDPathCollection *pathCollection;
    _UIHIDScaleEventTracker *scaleEventTracker;
    unsigned long long state;
}

- (void).cxx_destruct;

@end
