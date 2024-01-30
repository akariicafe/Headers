@class _PASLock;

@interface PPCalendarInternPool : NSObject {
    _PASLock *_poolLock;
}

- (void)clearPool;
- (id)internedCalendarWithEKCalendar:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
