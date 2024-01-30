@class NSMutableArray, NSMutableSet;

@interface _UIUpdateHIDDigitizerInput : NSObject <_UIUpdateHIDAbstractInput> {
    struct _UIUpdateInputInternal { struct _UIUpdateInputState { int mode; unsigned long long earliestModelTime; unsigned long long latestModelTime; } _state; unsigned int _flags; struct { struct _UIUpdateInputInternal *le_next; struct _UIUpdateInputInternal **le_prev; } _groupEntry; void /* function */ *_readyForModelTimeCallback; void *_context; char *_name; } _input;
    NSMutableArray *_events;
    NSMutableSet *_touches;
    long long _eventModelTimeDifference;
    long long _eventModelTimeDifferenceMin;
    long long _eventModelTimeDifferenceMax;
    unsigned long long _periodDuration;
    unsigned long long _sendPeriodDuration;
    BOOL _hasNextEventInformation;
    long long _nextEventReceiveDeadlineTimeDifference;
    unsigned long long _eventPhaseTime;
    BOOL _nextEventExpected;
    struct { int policy; long long receiveDeadline; } _eventExpectedProperties;
    struct { int policy; long long receiveDeadline; } _eventNotExpectedProperties;
}

- (struct __IOHIDEvent { } *)stopEventForModelTime:(unsigned long long)a0;
- (BOOL)readyForModelTime:(unsigned long long)a0 readyTime:(unsigned long long *)a1;
- (void)addEvent:(struct __IOHIDEvent { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeEvent:(struct __IOHIDEvent { } *)a0;

@end
