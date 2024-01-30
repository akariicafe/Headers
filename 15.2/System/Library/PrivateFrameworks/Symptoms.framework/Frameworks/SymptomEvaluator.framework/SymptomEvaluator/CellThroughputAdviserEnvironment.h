@class NSString, CellThroughputAdviser;

@interface CellThroughputAdviserEnvironment : ThroughputAdviserEnvironment <SymptomsAWDObserverDelegate, CoreTelephonyShimDelegate> {
    BOOL _registeredWithAWDObserver;
}

@property (readonly) CellThroughputAdviser *cellThroughputAdviser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void)infoHighThroughputStateChanged:(id)a0;
- (void)handleEvent:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)monitorSDMActivations:(BOOL)a0;

@end
