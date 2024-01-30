@class PCPersistentTimer, NSString, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface CUPersistentTimer : NSObject {
    NSDate *_cachedDate;
    double _cachedInterval;
    double _cachedLeeway;
    BOOL _cachedRepeating;
    BOOL _cachedUseXPC;
    BOOL _cachedWakeSystem;
    NSString *_identifier;
    BOOL _invalidateCalled;
    PCPersistentTimer *_pcPersistentTimer;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    BOOL _xpcRegistered;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) double interval;
@property (nonatomic) double leeway;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) BOOL repeating;
@property (copy, nonatomic) id /* block */ timerHandler;
@property (nonatomic) BOOL useXPC;
@property (nonatomic) BOOL wakeSystem;

- (void)_start;
- (id)initWithIdentifier:(id)a0;
- (void)dealloc;
- (void)start;
- (void)invalidate;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)_xpcTimerFired:(id)a0;
- (void)_pcTimerFired:(id)a0;
- (void)_startPCPersistentTimer;
- (void)_startXPCActivity;

@end
