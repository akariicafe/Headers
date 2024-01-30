@class GEOObserverHashTable;

@interface MSPMapsInstallState : NSObject {
    GEOObserverHashTable *_installStateObservers;
    BOOL _mapsInstalled;
    BOOL _hasState;
}

+ (BOOL)isMapsAppInstalled;
+ (void)setRunningInsideMapsApp;
+ (id)sharedState;

- (BOOL)_fetchMapsAppInstallState;
- (void)registerMapsInstallStateObserver:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)receivedChangeNotification:(id)a0;
- (BOOL)_isMapsAppInstalled;
- (void)unregisterMapsInstallStateObserver:(id)a0;

@end
