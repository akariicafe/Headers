@class NSString, NSArray, NSOrderedSet, NSMutableDictionary, NSDictionary, CNQuickFaceTimeAction, CNContact, NSMutableArray, NSMutableSet, CNQuickActionsUsageManager;
@protocol CNQuickActionsManagerDelegate;

@interface CNQuickActionsManager : NSObject <CNQuickContactActionDelegate> {
    NSMutableDictionary *_actionsByCategories;
    NSOrderedSet *_actions;
    NSMutableSet *_requests;
}

@property (retain, nonatomic) NSMutableArray *updateBlocks;
@property (retain, nonatomic) NSDictionary *groups;
@property (retain, nonatomic) CNQuickFaceTimeAction *faceTimeVideoAction;
@property (retain, nonatomic) CNQuickFaceTimeAction *faceTimeAudioAction;
@property (retain, nonatomic) CNQuickActionsUsageManager *usageManager;
@property (retain, nonatomic) NSArray *subManagers;
@property (retain, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) CNContact *contact;
@property (weak, nonatomic) id<CNQuickActionsManagerDelegate> delegate;
@property (copy, nonatomic) NSArray *categories;
@property (nonatomic) unsigned long long desiredNumberOfActions;
@property (nonatomic) BOOL bypassActionValidation;
@property (nonatomic) BOOL sortsWithDuet;
@property (nonatomic) BOOL useDuetIfAvailable;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)defaultCategories;
+ (id)actionsManagerForContacts:(id)a0;
+ (BOOL)hasActionsForContact:(id)a0;

- (void)_openURL:(id)a0;
- (id)quickActions;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_addAction:(id)a0;
- (id)initWithContacts:(id)a0;
- (void)contactActionDidUpdate:(id)a0;
- (void)contactAction:(id)a0 presentViewController:(id)a1;
- (id)_orderedLabels;
- (void)_createGroupsForPropertyKeys:(id)a0;
- (id)_ignoredLabels;
- (BOOL)_shouldGroupActionsInCategory:(id)a0;
- (id)_groupedActionsFromOrderedActionsByCategories:(id)a0;
- (void)_updateSingleContactActions;
- (id)_hierarchicalActionsForCategory:(id)a0 fromActions:(id)a1 askDelegate:(BOOL)a2;
- (void)updateActionsWithBlock:(id /* block */)a0;
- (id)_expandedActionsFromOrderedActionsByCategories:(id)a0 totalNumberOfActions:(unsigned long long)a1;
- (id)_hybridActionsFromOrderedActionsByCategories:(id)a0 totalNumberOfActions:(unsigned long long)a1;
- (void)refreshActions;
- (id)_addActionForPropertyItem:(id)a0 category:(id)a1 propertyActionClass:(Class)a2;
- (void)_updateMultiContactActions;
- (void)_updateActionsForPropertyItems:(id)a0 category:(id)a1 propertyActionClass:(Class)a2;
- (id)_propertyItemsForKey:(id)a0;
- (void)_updateIDSActionsForPropertyItems:(id)a0 category:(id)a1 serviceName:(id)a2 propertyActionClass:(Class)a3;
- (void)refreshActionsAndForceSendUpdate:(BOOL)a0;
- (void)stopUpdatingActions;
- (void)_actionsUpdated;
- (void)actionPerformed:(id)a0;

@end
