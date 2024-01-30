@class NSArray, PKPassShareTimeConfiguration;

@interface PKPassEntitlementsComposer : NSObject <PKPassEntitlementsComposerView> {
    NSArray *_originalSharedEntitlements;
    NSArray *_availableEntitlements;
    NSArray *_entitlementEntrys;
}

@property (readonly, nonatomic) NSArray *entitlementEntries;
@property (readonly, nonatomic) NSArray *composeSharedEntitlements;
@property (readonly, nonatomic) BOOL editable;
@property (readonly, nonatomic) BOOL canAllowResharing;
@property (readonly, nonatomic) unsigned long long possibleShareability;
@property (readonly, nonatomic) unsigned long long possibleVisibility;
@property (readonly, nonatomic) unsigned long long possibleManageability;
@property (readonly, nonatomic) PKPassShareTimeConfiguration *possibleTimeConfiguration;
@property (nonatomic) unsigned long long shareability;
@property (nonatomic) unsigned long long visibility;
@property (nonatomic) unsigned long long manageability;
@property (retain, nonatomic) PKPassShareTimeConfiguration *timeConfiguration;
@property (nonatomic) BOOL isUsingAdvancedScheduling;
@property (nonatomic) BOOL enabled;

- (id)init;
- (void).cxx_destruct;
- (void)_updateEntitlementEntry:(id)a0 capabilityMutationBlock:(id /* block */)a1;
- (void)_updateEntitlementEntry:(id)a0 enabled:(BOOL)a1;
- (void)_updateEntitlementEntry:(id)a0 isUsingAdvancedScheduling:(BOOL)a1;
- (void)_updateEntitlementEntry:(id)a0 timeConfiguration:(id)a1;
- (id)globalView;
- (id)initWithMyEntitlements:(id)a0;
- (id)initWithSharedEntitlements:(id)a0 availableEntitlements:(id)a1 editable:(BOOL)a2;
- (id)viewFor:(id)a0;

@end
