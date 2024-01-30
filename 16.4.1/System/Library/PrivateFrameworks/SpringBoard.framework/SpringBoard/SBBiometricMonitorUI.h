@class UIWindow, NSString, SBWindowScene, SBBiometricMonitorViewController;
@protocol SBBiometricMonitorDataSource;

@interface SBBiometricMonitorUI : NSObject <SBBiometricMonitorObserver> {
    BOOL _enabled;
    UIWindow *_debugWindow;
    SBBiometricMonitorViewController *_debugViewController;
    BOOL _deferredMatchUpdatePending;
    BOOL _deferredPresenceDetectUpdatePending;
}

@property (retain, nonatomic) id<SBBiometricMonitorDataSource> dataSource;
@property (weak, nonatomic) SBWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enable;
- (void)disable;
- (id)init;
- (void).cxx_destruct;
- (void)_cancelDeferredUpdateMatchState;
- (void)_doDeferredPresenceDetectUpdate;
- (void)_cancelDeferredUpdatePresenceDetectState;
- (void)_deferredUpdateMatchState;
- (void)_deferredUpdatePresenceDetectState;
- (void)_doDeferredMatchStateUpdate;
- (BOOL)_isDeferredMatchStateUpdatePending;
- (BOOL)_isDeferredPresenceDetectStateUpdatePending;
- (void)_updateMatchState;
- (void)_updatePresenceDetectState;
- (void)biometricMonitorDataSourceMatchingEnded:(id)a0;
- (void)biometricMonitorDataSourceMatchingFailed:(id)a0;
- (void)biometricMonitorDataSourceMatchingStarted:(id)a0;
- (void)biometricMonitorDataSourceMatchingSucceeded:(id)a0;
- (void)biometricMonitorDataSourcePoseUpdated:(id)a0;
- (void)biometricMonitorDataSourcePresenceDetectionEnded:(id)a0;
- (void)biometricMonitorDataSourcePresenceDetectionFailed:(id)a0;
- (void)biometricMonitorDataSourcePresenceDetectionStarted:(id)a0;
- (void)biometricMonitorDataSourcePresenceDetectionSucceeded:(id)a0;

@end
