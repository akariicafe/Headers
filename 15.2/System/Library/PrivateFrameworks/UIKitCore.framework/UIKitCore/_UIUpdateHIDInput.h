@class NSMutableArray;

@interface _UIUpdateHIDInput : NSObject <_UIUpdateHIDAbstractInput> {
    struct _UIUpdateInputInternal { struct _UIUpdateInputState { int mode; unsigned long long earliestModelTime; unsigned long long latestModelTime; } _state; unsigned int _flags; struct { struct _UIUpdateInputInternal *le_next; struct _UIUpdateInputInternal **le_prev; } _groupEntry; void /* function */ *_readyForModelTimeCallback; void *_context; char *_name; } _input;
    NSMutableArray *_events;
}

- (struct __IOHIDEvent { } *)stopEventForModelTime:(unsigned long long)a0;
- (void)addEvent:(struct __IOHIDEvent { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeEvent:(struct __IOHIDEvent { } *)a0;

@end
