@class NSString, NSOrderedSet, NSMapTable, NSMutableOrderedSet, NSSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WFResourceManager : NSObject <WFResourceNodeDelegate>

@property (retain, nonatomic) NSMutableArray *resourceNodes;
@property (nonatomic) BOOL resourcesAvailable;
@property (nonatomic) BOOL resourcesRequiredForDisplayAvailable;
@property (retain, nonatomic) NSMutableOrderedSet *unavailableResources;
@property (retain, nonatomic) NSOrderedSet *unavailableResourceErrors;
@property (retain, nonatomic) NSMapTable *targetSelectorTable;
@property (readonly, nonatomic) BOOL didEvaluateAvailabilityOfNodes;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue;
@property (readonly, nonatomic) NSSet *accessResources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addResource:(id)a0;
- (void)addTarget:(id)a0 selector:(SEL)a1;
- (void)removeTarget:(id)a0 selector:(SEL)a1;
- (void).cxx_destruct;
- (void)resourceNodeAvailabilityChanged:(id)a0;
- (id)initWithDefinitions:(id)a0;
- (void)refreshAvailabilityOfRequiredResourcesOfClasses:(id)a0;
- (BOOL)currentlyRequiresResourceOfClass:(Class)a0;
- (BOOL)currentlyRequiresResourceOfClasses:(id)a0;
- (id)currentlyRequiredResourcesOfClass:(Class)a0;
- (void)makeAccessResourcesAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)resourceObjectsOfClass:(Class)a0;
- (id)resourceObjectsConformingToProtocol:(id)a0;
- (id)resourceObjectsOfClasses:(id)a0;
- (void)addResourceObjectsOfClassesOrProtocols:(id)a0 withinNode:(id)a1 toSet:(id)a2;
- (id)relevantNodes;
- (BOOL)nodeIsRelevant:(id)a0;
- (BOOL)nodeIsAvailable:(id)a0 error:(id *)a1;
- (void)evaluateAvailabilityOfNodesWithChangedNode:(id)a0;
- (void)evaluateAvailabilityOfNodesIfNeeded;
- (void)notifyTargets;
- (id)selectorSetForTarget:(id)a0;
- (void)addResourceNodes:(id)a0;
- (void)removeResourceNodes:(id)a0;

@end
