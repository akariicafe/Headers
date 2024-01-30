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

- (BOOL)_queue_eventSourceIsEmergencyContact:(id)a0;
- (BOOL)_queue_eventSourceIsContact:(id)a0 inGroupWithIdentifier:(id)a1;
- (id)_queue_firstContactForPredicate:(id)a0;
- (BOOL)_queue_shouldAdjustEventBehaviorForMirroring;
- (id)initWithModeRepository:(id)a0 contactStore:(id)a1 auxiliaryStateMonitor:(id)a2;
- (id)resolutionForConfiguration:(id)a0 eventDetails:(id)a1 clientDetails:(id)a2 date:(id)a3 error:(id *)a4;
- (unsigned long long)_queue_resolveOutcomeForEventSender:(id)a0 clientDetails:(id)a1 date:(id)a2 reason:(out unsigned long long *)a3;
- (BOOL)_queue_isBreakthroughAllowedForSender:(id)a0 eventType:(unsigned long long)a1 clientDetails:(id)a2 date:(id)a3 reason:(out unsigned long long *)a4;
- (BOOL)_queue_eventSourceIsFavorite:(id)a0;
- (id)resolveBehaviorForEventDetails:(id)a0 clientDetails:(id)a1 date:(id)a2 error:(id *)a3;
- (void)dealloc;
- (id)_activeModeConfigurationForBehavior:(unsigned long long)a0;
- (id)_queue_resolutionForModeWithConfiguration:(id)a0 eventDetails:(id)a1 clientDetails:(id)a2 state:(id)a3 date:(id)a4 error:(id *)a5;
- (id)sysdiagnoseDataForDate:(id)a0 redacted:(BOOL)a1;
- (id)_queue_adjustEventBehaviorResolutionForAuxiliaryState:(id)a0;
- (BOOL)_queue_isBreakthroughAllowedForModeIdentifier:(id)a0 withConfiguration:(id)a1 application:(id)a2 sender:(id)a3 urgency:(unsigned long long)a4 eventType:(unsigned long long)a5 threadIdentifier:(id)a6 filterCriteria:(id)a7 notifyAnyway:(BOOL)a8 reason:(out unsigned long long *)a9;
- (BOOL)_queue_eventSourceIsRepeat:(id)a0 clientDetails:(id)a1 date:(id)a2;
- (id)_queue_resolveBehaviorForEventDetails:(id)a0 clientDetails:(id)a1 date:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (BOOL)_queue_eventSourceIsContact:(id)a0;
- (id)sysdiagnoseDataIdentifier;
- (id)_legacyModeConfigurationForModeConfiguration:(id)a0;

@end
