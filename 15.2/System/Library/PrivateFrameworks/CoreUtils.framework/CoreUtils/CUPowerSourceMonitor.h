@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CUPowerSourceMonitor : NSObject {
    BOOL _activateCalled;
    NSMutableDictionary *_aggregateSources;
    NSMutableDictionary *_pendingAggregates;
    NSMutableDictionary *_powerSources;
    int _psNotifyTokenAccessoryAttach;
    int _psNotifyTokenAccessoryPowerSource;
    int _psNotifyTokenAccessoryTimeRemaining;
    int _psNotifyTokenAnyPowerSource;
}

@property (nonatomic) unsigned int changeFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ powerSourceFoundHandler;
@property (copy, nonatomic) id /* block */ powerSourceLostHandler;
@property (copy, nonatomic) id /* block */ powerSourceChangedHandler;

- (void)_cleanup;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_aggregatePowerSourceFound:(id)a0;
- (void)_updatePowerSources;
- (void)_aggregatePowerSourceUpdate:(id)a0 changes:(unsigned int)a1;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)_update;
- (void)_handlePowerSourceUpdate:(id)a0 desc:(id)a1 adapterDesc:(id)a2;
- (void)_handlePowerSourceFound:(id)a0 desc:(id)a1 adapterDesc:(id)a2;
- (void)dealloc;
- (void)_aggregatePowerSourceLost:(id)a0;
- (void)_handlePowerSourceLost:(id)a0 sourceID:(id)a1;

@end
