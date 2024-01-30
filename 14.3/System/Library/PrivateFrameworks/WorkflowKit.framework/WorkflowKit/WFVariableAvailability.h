@class NSMapTable, NSHashTable, WFWorkflow, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface WFVariableAvailability : NSObject

@property (retain, nonatomic) NSMapTable *providingActionsByVariableName;
@property (retain, nonatomic) NSMapTable *variableScopeLevelsByGroupingIdentifier;
@property (retain, nonatomic) NSMapTable *variableScopeEndActionsByStartAction;
@property (retain, nonatomic) NSMapTable *actionOutputVariableActionsByUUID;
@property (retain, nonatomic) NSCache *cachedContentClassesForVariableNameAtIndex;
@property (retain, nonatomic) NSHashTable *variableObservers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *actionOutputWorkQueue;
@property (readonly, weak, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic) BOOL extensionInputVariableUsed;

+ (BOOL)actionIsEligibleForOutputVariable:(id)a0;

- (void)invalidateCache;
- (void).cxx_destruct;
- (id)initWithWorkflow:(id)a0;
- (void)populateCache;
- (id)actionProvidingVariableWithOutputUUID:(id)a0;
- (void)addVariableObserver:(id)a0;
- (void)removeVariableObserver:(id)a0;
- (id)availableVariableNamesExcludingThoseProvidedByAction:(id)a0;
- (id)availableVariableNamesAtIndex:(unsigned long long)a0;
- (BOOL)areVariablesAvailableAtIndex:(unsigned long long)a0;
- (BOOL)isVariableWithName:(id)a0 availableAtIndex:(unsigned long long)a1;
- (BOOL)isVariableAvailableAtIndex:(unsigned long long)a0 withActionTest:(id /* block */)a1;
- (void)enumerateActionsInScopeAtIndex:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (BOOL)areActionOutputVariablesAvailableAtIndex:(unsigned long long)a0;
- (id)availableOutputActionsAtIndex:(unsigned long long)a0;
- (void)populateActionOutputVariableActionsByUUID;
- (BOOL)isVariableWithOutputUUIDAvailable:(id)a0 atIndex:(unsigned long long)a1;
- (void)invalidateActionOutputProviderCache;
- (id)actionsProvidingVariableName:(id)a0 atIndex:(unsigned long long)a1;
- (id)_possibleContentClassesForVariableNamed:(id)a0 atIndex:(unsigned long long)a1 context:(id)a2 excludingAction:(id)a3;
- (id)possibleContentClassesForVariableNamed:(id)a0 atIndex:(unsigned long long)a1 context:(id)a2 excludingAction:(id)a3;
- (unsigned long long)variableScopeLevelForGroupingIdentifier:(id)a0;
- (void)notifyVariablesChanged;
- (void)notifyContentClassesChanged;
- (void)renameVariable:(id)a0 to:(id)a1 fromAction:(id)a2;
- (void)invalidateContentClassCache;
- (void)actionsDidMove;

@end
