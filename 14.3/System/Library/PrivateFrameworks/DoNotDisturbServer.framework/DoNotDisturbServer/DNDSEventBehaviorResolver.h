@class CNContactStore, NSString, CNFavorites, NSObject, NSMutableArray;
@protocol DNDSEventBehaviorResolverDataSource, OS_dispatch_queue, DNDSModeRepository;

@interface DNDSEventBehaviorResolver : NSObject <DNDSSysdiagnoseDataProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    id<DNDSModeRepository> _modeRepository;
    CNContactStore *_contactStore;
    CNFavorites *_favorites;
    NSMutableArray *_resolutionRecord;
}

@property (weak, nonatomic) id<DNDSEventBehaviorResolverDataSource> dataSource;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)sysdiagnoseDataIdentifier;
- (id)sysdiagnoseDataForDate:(id)a0;
- (id)_queue_resolveBehaviorForEventDetails:(id)a0 clientDetails:(id)a1 date:(id)a2 error:(id *)a3;
- (unsigned long long)_queue_resolveOutcomeForEventSource:(id)a0 clientDetails:(id)a1 date:(id)a2 reason:(out unsigned long long *)a3;
- (BOOL)_queue_eventSourceIsFavorite:(id)a0;
- (BOOL)_queue_eventSourceIsContact:(id)a0;
- (BOOL)_queue_eventSourceIsContact:(id)a0 inGroupWithIdentifier:(id)a1;
- (BOOL)_queue_eventSourceIsRepeat:(id)a0 clientDetails:(id)a1 date:(id)a2;
- (BOOL)_queue_eventSourceIsEmergencyContact:(id)a0;
- (id)initWithModeRepository:(id)a0 contactStore:(id)a1;
- (id)resolveBehaviorForEventDetails:(id)a0 clientDetails:(id)a1 date:(id)a2 error:(id *)a3;

@end
