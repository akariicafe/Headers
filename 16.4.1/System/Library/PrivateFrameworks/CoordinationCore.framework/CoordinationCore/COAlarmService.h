@class NSString, COClientObserverSet;

@interface COAlarmService : COService <COAlarmManagerServiceInterface, COMeshAlarmAddOnDelegate>

@property (readonly, nonatomic) COClientObserverSet *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceWithDelegate:(id)a0;
+ (BOOL)_isAllowedClient:(id)a0;

- (void)_clientLost:(id)a0;
- (void)removeAlarm:(id)a0 forAccessoryUniqueIdentifier:(id)a1 categoryType:(id)a2 asInstance:(id)a3 cluster:(id)a4 withCallback:(id /* block */)a5;
- (BOOL)_applicableToCluster:(id)a0;
- (void)_addOnRemoved:(id)a0;
- (void)alarmAddOn:(id)a0 didChangeAlarms:(id)a1;
- (void)alarmAddOn:(id)a0 didRemoveAlarms:(id)a1;
- (void)alarmAddOn:(id)a0 didDismissAlarms:(id)a1;
- (void)alarmAddOn:(id)a0 didUpdateAlarms:(id)a1;
- (void)alarmAddOn:(id)a0 didChangeFiringAlarms:(id)a1;
- (void)canDispatchForAccessoryUniqueIdentifier:(id)a0 categoryType:(id)a1 asInstance:(id)a2 cluster:(id)a3 reply:(id /* block */)a4;
- (void)addAlarm:(id)a0 forAccessoryUniqueIdentifier:(id)a1 categoryType:(id)a2 asInstance:(id)a3 cluster:(id)a4 withCallback:(id /* block */)a5;
- (id)initWithListenerProvider:(id)a0 addOnProvider:(id)a1 delegate:(id)a2;
- (void)alarmAddOn:(id)a0 didFireAlarms:(id)a1;
- (void)alarmsForAccessories:(id)a0 cluster:(id)a1 callback:(id /* block */)a2;
- (void)_postNotificationName:(id)a0 forAlarms:(id)a1 toAddOn:(id)a2 requiresUserInfo:(BOOL)a3;
- (BOOL)_canRequestCreationOfCluster:(id)a0;
- (void)didResetAlarmAddOn:(id)a0;
- (void)updateAlarm:(id)a0 forAccessoryUniqueIdentifier:(id)a1 categoryType:(id)a2 asInstance:(id)a3 cluster:(id)a4 withCallback:(id /* block */)a5;
- (void)alarmAddOn:(id)a0 didAddAlarms:(id)a1;
- (void)addObserverForNotificationName:(id)a0 constraints:(id)a1 asInstance:(id)a2 cluster:(id)a3 withCallback:(id /* block */)a4;
- (void)_addOnAdded:(id)a0;
- (void)_didResetAlarmAddOn:(id)a0;
- (void).cxx_destruct;
- (void)snoozeAlarmWithIdentifier:(id)a0 cluster:(id)a1 withCallback:(id /* block */)a2;
- (void)dismissAlarmWithIdentifier:(id)a0 cluster:(id)a1 withCallback:(id /* block */)a2;
- (void)_configureServiceInterfacesOnConnection:(id)a0;
- (void)removeObserverForNotificationName:(id)a0 cluster:(id)a1 withCallback:(id /* block */)a2;
- (void)alarmsforAccessoryUniqueIdentifier:(id)a0 categoryType:(id)a1 asInstance:(id)a2 cluster:(id)a3 withCallback:(id /* block */)a4;
- (void)didChangeCompositionForAlarmAddOn:(id)a0;

@end
