@class _PASLock;

@interface PPCalendarInternPool : NSObject {
    _PASLock *_poolLock;
}

- (id)init;
- (void).cxx_destruct;
- (void)clearPool;
- (id)internedCalendarWithEKCalendar:(id)a0;

@end
