@class _PASLock;

@interface PPCalendarInternPool : NSObject {
    _PASLock *_poolLock;
}

- (void)clearPool;
- (id)init;
- (id)internedCalendarWithEKCalendar:(id)a0;
- (void).cxx_destruct;

@end
