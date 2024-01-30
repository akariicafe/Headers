@class NSString, NSArray, PETEventTracker;

@interface _DKEventStatsCounterInternal : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _hasType;
    BOOL _hasResult;
    unsigned long long _numCounters;
    unsigned long long *_counters;
    NSString *_eventName;
    NSString *_eventType;
    NSArray *_typeValues;
    NSString *_domain;
    PETEventTracker *_eventTracker;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
