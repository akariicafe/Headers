@class CUCoalescer, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SFPowerSourceMonitor : NSObject {
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    BOOL _activateCalled;
    long long _previousSourcesCount;
    unsigned short _powerSourcesUpdateIndex;
    CUCoalescer *_updateCoalescer;
    NSMutableDictionary *_powerSources;
    int _psNotifyTokenAccessoryAttach;
    int _psNotifyTokenAccessoryPowerSource;
    int _psNotifyTokenAccessoryTimeRemaining;
    int _psNotifyTokenAnyPowerSource;
}

@property (nonatomic) unsigned int changeFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL skipCoalescing;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ powerSourcesFoundHandler;
@property (copy, nonatomic) id /* block */ powerSourcesLostHandler;
@property (copy, nonatomic) id /* block */ powerSourcesChangedHandler;

- (void)_cleanup;
- (void)_handlePowerSourcesChanged:(id)a0 changes:(unsigned int)a1;
- (void)_updatePowerSourcesWithInfo:(void *)a0 sources:(struct __CFArray { } *)a1 sourcesCount:(long long)a2;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_handlePowerSourcesLost:(id)a0;
- (void)_update;
- (void)_foundPowerSource:(id)a0 desc:(id)a1 adapterDesc:(id)a2;
- (void)_removePowerSources:(id)a0;
- (void)_updatePowerSource:(id)a0 desc:(id)a1 adapterDesc:(id)a2;
- (BOOL)powerSourcesListWithOutInfo:(const void **)a0 outSources:(const struct __CFArray **)a1 outSourcesCount:(long long *)a2;
- (void)_handlePowerSourcesFound:(id)a0;
- (void)dealloc;
- (void)_triggerUpdatePowerSources;
- (void)_updatePowerSources;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;

@end
