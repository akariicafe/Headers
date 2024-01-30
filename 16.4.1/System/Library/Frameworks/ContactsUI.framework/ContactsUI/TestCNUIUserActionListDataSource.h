@class NSDictionary, NSString, CNContact;

@interface TestCNUIUserActionListDataSource : NSObject <CNUIUserActionListDataSource>

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSDictionary *userActionListModelResultBlocksByActionTypeAskedFor;
@property (readonly, nonatomic) NSDictionary *actionsByActionTypeByContact;
@property (nonatomic) BOOL tracksChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allActionTypes;
+ (id)allSupportedActionTypes;
+ (id)allSupportedActionTypesWithCapabilities:(id)a0;

- (void).cxx_destruct;
- (id)actionTypesForConsumer:(id)a0;
- (id)consumer:(id)a0 actionModelsForActionType:(id)a1;
- (id)consumer:(id)a0 actionModelsForActionType:(id)a1 handler:(id /* block */)a2;
- (id)consumer:(id)a0 imageForActionType:(id)a1;
- (id)consumer:(id)a0 localizedButtonDisplayNameForActionType:(id)a1;
- (id)consumer:(id)a0 localizedDisplayNameForActionType:(id)a1;
- (id)consumer:(id)a0 localizedDisplayNameForButtonWithDefaultAction:(id)a1 actionType:(id)a2;
- (id)initWithActionsByActionTypeByContact:(id)a0;
- (id)thirdPartyActionsForContactProperty:(id)a0;
- (id)thirdPartyActionsForCurrentContactAndPropertyKey:(id)a0 identifier:(id)a1;
- (id)thirdPartyTargetsForActionTypes:(id)a0;

@end
