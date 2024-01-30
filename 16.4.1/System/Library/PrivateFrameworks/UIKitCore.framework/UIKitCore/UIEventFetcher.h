@class NSMutableDictionary, CADisplayLink, NSMutableSet, _UIHIDEventSynchronizer, NSMutableArray;
@protocol UIEventFetcherSink;

@interface UIEventFetcher : NSObject {
    NSMutableArray *_incomingHIDEventsFiltered;
    struct __CFRunLoop { } *_cfRunLoop;
    id /* block */ _receiveBlock;
    id /* block */ _addToFilteredEventsBlock;
    id /* block */ _gameControllerEventFilterGenerator;
    id /* block */ _passiveObservationFilterGenerator;
    id /* block */ _watchSystemAppFilter;
    NSMutableArray *_eventFilters;
    int _displayLinkIdleTicks;
    CADisplayLink *_displayLink;
    long long _countOfEventsReceivedSinceLastDisplayLinkCallback;
    long long _countOfEventsReceivedInPreviousFrame;
    BOOL _didSignalOneMoveEventSinceLastDisplayLinkCallback;
    double _lastImportantEventTimestamp;
    double _lastSignalTimestamp;
    double _lastSignalEventTimestamp;
    double _lastFilteredEventTimestamp;
    double _estimatedDisplayLinkDrift;
    long long _lastSignalType;
    unsigned long long _lastSignalReason;
    BOOL _needsSignalOnDisplayLink;
    double _commitTimeForTouchEvents;
    double _beginTimeForTouchEvents;
    double _deadlineTimeForTouchEvents;
    NSMutableDictionary *_latestMoveDragEventsBySessionID;
    double _latestMoveDragEventTimestamp;
    double _latestMoveDragEventResendTimestamp;
    struct __CFRunLoopTimer { } *_resendDragEventsTimer;
    NSMutableSet *_contextIDsNeedingHoverEventResend;
    NSMutableDictionary *_latestHoverEventsByContextID;
    _UIHIDEventSynchronizer *_synchronizer;
    id<UIEventFetcherSink> _eventFetcherSink;
}

- (void)displayLinkDidFire:(id)a0;
- (void)resendDragMoveEventsOnTimer:(struct __CFRunLoopTimer { } *)a0 withInterval:(double)a1;
- (void)threadMain;
- (void)_receiveHIDEvent:(struct __IOHIDEvent { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
