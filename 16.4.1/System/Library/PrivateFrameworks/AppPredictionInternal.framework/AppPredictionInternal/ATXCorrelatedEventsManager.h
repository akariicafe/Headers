@class _PASLock, ATXCorrelatedEventsDateBuffer;

@interface ATXCorrelatedEventsManager : NSObject {
    _PASLock *_correlatedEventsLock;
    _PASLock *_typeAEventDataLock;
    _PASLock *_typeBEventDataLock;
}

@property (readonly, nonatomic) Class firstEventType;
@property (readonly, nonatomic) Class secondEventType;
@property (readonly, nonatomic) ATXCorrelatedEventsDateBuffer *firstEventTypeDateBuffer;
@property (readonly, nonatomic) ATXCorrelatedEventsDateBuffer *secondEventTypeDateBuffer;

+ (BOOL)eventsOverlapForEventA:(id)a0 withDateBuffer:(id)a1 eventB:(id)a2 withDateBuffer:(id)a3;

- (void).cxx_destruct;
- (void)correlateEvents;
- (id)correlatedEvents;
- (id)initWithFirstEventType:(Class)a0 firstEventTypeDateBuffer:(id)a1 secondEventType:(Class)a2 secondEventTypeDateBuffer:(id)a3;
- (void)insertEvents:(id)a0 forEventType:(long long)a1;

@end
