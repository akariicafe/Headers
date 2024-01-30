@class NSArray, NSDateInterval, NSString, NSDate, NSMutableSet;
@protocol BSTimerScheduleQuerying, BSCancellable, BLSHEngineRequestDatesOperationDelegate, BSInvalidatable, BLSHOSTimerProviding;

@interface BLSHEngineRequestDatesOperation : NSObject <BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_lock_pendingEnvironments;
    id<BSTimerScheduleQuerying, BSCancellable, BSInvalidatable> _lock_timeoutTimer;
    id<BLSHEngineRequestDatesOperationDelegate> _lock_delegate;
    id<BLSHOSTimerProviding> _osTimerProvider;
    NSArray *_lock_environmentIdentifiers;
    unsigned int _lock_environmentCount;
    NSDate *_lock_beginDate;
    double _lock_beginTime;
    double _lock_shortestInterval;
    double _lock_averageInterval;
    double _lock_longestInterval;
    BOOL _lock_complete;
    BOOL _lock_begun;
    BOOL _lock_didReset;
    BOOL _lock_timedOut;
    BOOL _lock_invalidated;
}

@property (readonly, nonatomic) NSDateInterval *requestInterval;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, nonatomic) NSArray *environmentIdentifiers;
@property (readonly, nonatomic) unsigned int environmentCount;
@property (readonly, nonatomic) double shortestInterval;
@property (readonly, nonatomic) double averageInterval;
@property (readonly, nonatomic) double longestInterval;
@property (readonly, nonatomic) BOOL didReset;
@property (readonly, nonatomic) NSDate *beginDate;
@property (readonly, nonatomic) double beginTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)beginOperationWithIntervals:(id)a0 shouldReset:(BOOL)a1;
- (id)initWithRequestInterval:(id)a0 delegate:(id)a1 osTimerProvider:(id)a2;
- (id)telemetryDataWithEndTime:(double)a0;

@end
