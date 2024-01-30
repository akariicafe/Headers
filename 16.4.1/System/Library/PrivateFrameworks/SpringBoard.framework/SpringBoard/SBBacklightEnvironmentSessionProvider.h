@class NSSet, NSString, NSHashTable, BLSHBacklightInactiveEnvironmentSession;
@protocol BSInvalidatable;

@interface SBBacklightEnvironmentSessionProvider : NSObject <BLSHBacklightInactiveEnvironmentSessionObserving, BLSHBacklightEnvironmentSessionProviding> {
    NSHashTable *_backlightEnvironmentSceneProviders;
    NSHashTable *_backlightSceneHostEnvironmentProviders;
    NSHashTable *_observers;
    id<BSInvalidatable> _presentationUpdateLiveRenderAssertion;
    BOOL _springBoardBootCompleted;
}

@property (retain, nonatomic, setter=_setCurrentSession:) BLSHBacklightInactiveEnvironmentSession *_currentSession;
@property (readonly, copy, nonatomic) NSSet *currentPresentationBundleIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_notifyObserversOfPresentation;
- (void)addObserver:(id)a0;
- (void)registerBacklightSceneHostEnvironmentProvider:(id)a0;
- (void)unregisterBacklightSceneHostEnvironmentProvider:(id)a0;
- (void)invalidateBacklightSceneHostEnvironmentsForProvider:(id)a0;
- (void)removeObserver:(id)a0;
- (id)_buildPresentation;
- (void)invalidateBacklightScenesForProvider:(id)a0;
- (void)unregisterBacklightEnvironmentSceneProvider:(id)a0;
- (id)init;
- (id)createInactiveEnvironmentSession;
- (void)didEndInactiveEnvironmentSession:(id)a0;
- (void)registerBacklightEnvironmentSceneProvider:(id)a0;
- (void)inactiveEnvironmentSession:(id)a0 didUpdateToPresentation:(id)a1;
- (void)_rebuildPresentation;
- (void).cxx_destruct;
- (id)_backlightPresentationEntries;

@end
