@class CADisplayLink, _UIHIDPathSynchronizationFilter, _UIHIDPathCollection, _UIHIDPath, NSRunLoop;

@interface _UIHIDEventSynchronizer : NSObject {
    unsigned long long _strategy;
    long long _state;
    id /* block */ _outputEventsHandler;
    id /* block */ _completionHandler;
    NSRunLoop *_runLoop;
    struct CGPoint { double x; double y; } _initialPosition;
    double _timestampOfInitialInputEvent;
    _UIHIDPath *_outputPath;
    _UIHIDPathCollection *_outputPathCollection;
    _UIHIDPathSynchronizationFilter *_pathFilter;
    long long _endingDeliveryPhase;
    CADisplayLink *_displayLink;
    int _offsetToNextCoalescableEventIndex;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_renderEvents:(id)a0;

@end
