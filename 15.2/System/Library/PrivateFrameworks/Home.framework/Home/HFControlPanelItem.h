@class NSString, NSDictionary, NAIdentity, NSSet;

@interface HFControlPanelItem : HFItem <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, nonatomic) NSDictionary *displayResults;
@property (readonly, nonatomic) NSDictionary *controlItemsByUUID;
@property (readonly, nonatomic) NSDictionary *UUIDsByControlItemPointer;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSSet *controlItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)standardControlPanelItemsForControlItems:(id)a0;
+ (id)_controlPanelItemRules;

- (long long)sortPriority;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithControlItems:(id)a0 displayResults:(id)a1;
- (id)identifierForControlItem:(id)a0;
- (id)controlItemForIdentifier:(id)a0;

@end
