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
+ (id)actionsManagerForContacts:(id)a0;
+ (BOOL)hasActionsForContact:(id)a0;
+ (id)defaultCategories;

- (void)_openURL:(id)a0;
- (id)quickActions;
- (id)_orderedLabels;
- (id)_ignoredLabels;
- (void)refreshActions;
- (void)contactActionDidUpdate:(id)a0;
- (void)contactAction:(id)a0 presentViewController:(id)a1;
- (id)initWithContacts:(id)a0;
- (void)_createGroupsForPropertyKeys:(id)a0;
- (void)stopUpdatingActions;
- (BOOL)_shouldGroupActionsInCategory:(id)a0;
- (id)_groupedActionsFromOrderedActionsByCategories:(id)a0;
- (id)_hierarchicalActionsForCategory:(id)a0 fromActions:(id)a1 askDelegate:(BOOL)a2;
- (void)updateActionsWithBlock:(id /* block */)a0;
- (id)_expandedActionsFromOrderedActionsByCategories:(id)a0 totalNumberOfActions:(unsigned long long)a1;
- (void)_actionsUpdated;
- (id)_hybridActionsFromOrderedActionsByCategories:(id)a0 totalNumberOfActions:(unsigned long long)a1;
- (void)actionPerformed:(id)a0;
- (id)_addActionForPropertyItem:(id)a0 category:(id)a1 propertyActionClass:(Class)a2;
- (void)_updateSingleContactActions;
- (void)_updateActionsForPropertyItems:(id)a0 category:(id)a1 propertyActionClass:(Class)a2;
- (id)_propertyItemsForKey:(id)a0;
- (void)_updateIDSActionsForPropertyItems:(id)a0 category:(id)a1 serviceName:(id)a2 propertyActionClass:(Class)a3;
- (void)_updateMultiContactActions;
- (void)refreshActionsAndForceSendUpdate:(BOOL)a0;
- (void).cxx_destruct;
- (void)_addAction:(id)a0;
- (void)dealloc;

@end
