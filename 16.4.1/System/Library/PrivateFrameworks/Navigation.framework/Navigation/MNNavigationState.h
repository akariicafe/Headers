@class MNLocationProviderCLParameters, MNNavigationTraceManager, MNNavigationStateManager, MNSimulationLocationProvider;

@interface MNNavigationState : NSObject

@property (readonly, weak, nonatomic) MNNavigationStateManager *stateManager;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL requiresHighMemoryThreshold;
@property (readonly, nonatomic) BOOL requiresLocationAccess;
@property (readonly, nonatomic) unsigned long long desiredLocationProviderType;
@property (readonly, nonatomic) MNLocationProviderCLParameters *clParameters;
@property (readonly, nonatomic) BOOL shouldClearStoredRoutes;
@property (readonly, nonatomic) double locationUpdateInterval;
@property (readonly, nonatomic) double suggestionUpdateFrequency;
@property (readonly, nonatomic) MNNavigationTraceManager *traceManager;
@property (readonly, nonatomic) MNSimulationLocationProvider *simulationLocationProvider;

- (void)changeUserOptions:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)enterState;
- (void)forwardInvocation:(id)a0;
- (BOOL)_isSelectorValidForForwarding:(SEL)a0;
- (id)initWithStateManager:(id)a0;
- (void)leaveState;
- (void)postEnterState;
- (void)preEnterState;

@end
