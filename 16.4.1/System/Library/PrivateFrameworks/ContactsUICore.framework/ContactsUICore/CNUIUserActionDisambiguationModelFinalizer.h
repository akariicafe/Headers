@class NSArray, NSMutableArray, CNUIUserActionItem;

@interface CNUIUserActionDisambiguationModelFinalizer : NSObject

@property (retain, nonatomic) CNUIUserActionItem *defaultAction;
@property (retain, nonatomic) NSMutableArray *actions;
@property (retain, nonatomic) NSArray *recentActions;
@property (retain, nonatomic) NSArray *directoryServiceActions;
@property (retain, nonatomic) NSArray *foundOnDeviceActions;

+ (id)modelWithDefaultAction:(id)a0 actions:(id)a1 recentActions:(id)a2 directoryServiceActions:(id)a3 foundOnDeviceActions:(id)a4;

- (id)model;
- (void).cxx_destruct;
- (void)removeUninterestingItentActions;
- (id)initWithDefaultAction:(id)a0 actions:(id)a1 recentActions:(id)a2 directoryServiceActions:(id)a3 foundOnDeviceActions:(id)a4;
- (void)promoteLoneActionToBeDefault;
- (void)promoteLoneManagedCallProviderActionToBeDefault;
- (void)removeDefaultActionFromListOfActions;
- (void)removeDiscoveredActionsAlreadyCurated;
- (void)removeDuplicateIntentActionsFromSameProvider;

@end
