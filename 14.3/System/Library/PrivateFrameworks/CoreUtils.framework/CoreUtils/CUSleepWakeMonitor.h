@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CUSleepWakeMonitor : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    unsigned int _powerCnx;
    struct IONotificationPort { } *_powerNotificationPort;
    unsigned int _powerNotifier;
    unsigned int _sleepWakeFlags;
    int _sleepWakeState;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) id /* block */ sleepWakeHandler;

- (void)_ensureStarted;
- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)_invalidated;
- (void)_invalidate;
- (void)_sleepWakeHandlerForService:(unsigned int)a0 type:(unsigned int)a1 arg:(void *)a2;
- (void)_ensureStopped;
- (void)invalidate;

@end
