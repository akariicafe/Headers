@interface BackBoardScrollEventStream : BaseScrollEventStream

- (void)didAppendFinalEvent:(struct __IOHIDEvent { } *)a0;
- (void)willAppendInitialEvent:(struct __IOHIDEvent { } *)a0;
- (void)addToBuffer:(struct __IOHIDEvent { } *)a0;

@end
