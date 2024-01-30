@class CNContactStore, NSString, DNDSAuxiliaryStateMonitor, CNFavorites, NSObject, NSMutableArray;
@protocol DNDSEventBehaviorResolverDataSource, OS_dispatch_queue, DNDSModeRepository;

@interface DNDSEventBehaviorResolver : NSObject <DNDSSysdiagnoseDataProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    id<DNDSModeRepository> _modeRepository;
    CNContactStore *_contactStore;
    DNDSAuxiliaryStateMonitor *_auxiliaryStateMonitor;
    CNFavorites *_favorites;
    NSMutableArray *_resolutionRecord;
}

@property (weak, nonatomic) id<DNDSEventBehaviorResolverDataSource> dataSource;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sysdiagnoseDataIdentifier;
- (BOOL)_queue_shouldAdjustEventBehaviorForMirroring;
- (id)_queue_firstContactForPredicate:(id)a0;
- (unsigned long long)_queue_resolveOutcomeForEventSender:(id)a0 clientDetails:(id)a1 date:(id)a2 reason:(out unsigned long long *)a3;
- (id)initWithModeRepository:(id)a0 contactStore:(id)a1 auxiliaryStateMonitor:(id)a2;
- (BOOL)_queue_isBreakthroughAllowedForSender:(id)a0 eventType:(unsigned long long)a1 clientDetails:(id)a2 date:(id)a3 reason:(out unsigned long long *)a4;
- (id)resolveBehaviorForEventDetails:(id)a0 clientDetails:(id)a1 date:(id)a2 error:(id *)a3;
- (id)sysdiagnoseDataForDate:(id)a0 redacted:(BOOL)a1;
- (BOOL)_queue_eventSourceIsContact:(id)a0 inGroupWithIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)_queue_resolutionForModeWithConfiguration:(id)a0 eventDetails:(id)a1 clientDetails:(id)a2 activeModeUUID:(id)a3 date:(id)a4 error:(id *)a5;
- (id)resolutionForConfiguration:(id)a0 eventDetails:(id)a1 clientDetails:(id)a2 date:(id)a3 error:(id *)a4;
- (id)_activeModeConfigurationForBehavior:(unsigned long long)a0;
- (BOOL)_queue_eventSourceIsFavorite:(id)a0;
- (BOOL)_queue_eventSourceIsEmergencyContact:(id)a0;
- (void)dealloc;
- (id)_queue_resolveBehaviorForEventDetails:(id)a0 clientDetails:(id)a1 date:(id)a2 error:(id *)a3;
- (id)_legacyModeConfigurationForModeConfiguration:(id)a0;
- (BOOL)_queue_isBreakthroughAllowedForConfiguration:(id)a0 application:(id)a1 sender:(id)a2 urgency:(unsigned long long)a3 eventType:(unsigned long long)a4 threadIdentifier:(id)a5 notifyAnyway:(BOOL)a6 reason:(out unsigned long long *)a7;
- (BOOL)_queue_eventSourceIsRepeat:(id)a0 clientDetails:(id)a1 date:(id)a2;
- (id)_queue_adjustEventBehaviorResolutionForAuxiliaryState:(id)a0;
- (BOOL)_queue_eventSourceIsContact:(id)a0;

@end
