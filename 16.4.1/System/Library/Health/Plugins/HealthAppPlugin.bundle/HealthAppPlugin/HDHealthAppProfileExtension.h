@class HDAnalyticsDailyEventManager, HDHealthAppEmergencySOSManager, NSString, HDHAHealthAppApplicationInstallationManager, HDHealthAppLabConceptObserver, HDHealthAppDataObserver, HDProfile, HDHealthAppSharingEntryObserver;

@interface HDHealthAppProfileExtension : NSObject <HDHealthDaemonReadyObserver, HDProfileReadyObserver, LSApplicationWorkspaceObserverProtocol, HDProfileExtension>

@property (retain, nonatomic) HDHealthAppDataObserver *dataObserver;
@property (retain, nonatomic) HDHealthAppLabConceptObserver *labConceptObserver;
@property (retain, nonatomic) HDHealthAppSharingEntryObserver *sharingEntryObserver;
@property (retain, nonatomic) HDHAHealthAppApplicationInstallationManager *appInstallationManager;
@property (retain, nonatomic) HDAnalyticsDailyEventManager *dailyAnalyticsManager;
@property (retain, nonatomic) HDHealthAppEmergencySOSManager *emergencySOSManager;
@property (weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileDidBecomeReady:(id)a0;
- (void)daemonReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)dealloc;
- (void)applicationsDidUninstall:(id)a0;
- (void).cxx_destruct;

@end
