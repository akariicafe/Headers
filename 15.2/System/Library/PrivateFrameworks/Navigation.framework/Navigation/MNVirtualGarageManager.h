@class NSString, GEOObserverHashTable, MNTraceRecorder, VGVehicle;
@protocol MNVirtualGarageProvider;

@interface MNVirtualGarageManager : NSObject <MNVirtualGarageProviderDelegate> {
    id<MNVirtualGarageProvider> _provider;
    GEOObserverHashTable *_observers;
    MNTraceRecorder *_traceRecorder;
}

@property (class, readonly, nonatomic) MNVirtualGarageManager *sharedManager;

@property (readonly, nonatomic) VGVehicle *lastVehicleState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setProvider:(id)a0;
- (void)registerObserver:(id)a0;
- (void)start;
- (id)initPrivate;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)dealloc;
- (void)stop;
- (void)setTraceRecorder:(id)a0;
- (void)virtualGarageProvider:(id)a0 didUpdateSelectedVehicle:(id)a1;
- (id)_standardVirtualGarageProvider;
- (BOOL)_isStandardProvider:(id)a0;

@end
