@class NSCalendar, NSObject;
@protocol OS_dispatch_queue;

@interface WBSHistorySessionIntervalCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSCalendar *_calendar;
    struct Vector<double, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { double *m_buffer; unsigned int m_capacity; unsigned int m_size; } _intervalCache;
}

- (id)init;
- (void).cxx_destruct;
- (double)beginningOfSessionContainingTime:(double)a0;
- (double)_beginningOfSessionContainingTime:(double)a0;
- (void)_getSessionIntervalForTime:(double)a0 beginningOfDay:(double *)a1 beginningOfNextDay:(double *)a2;
- (id).cxx_construct;
- (id)initWithCalendar:(id)a0;

@end
