@class CNContactStore, CNMutableContact, NSDictionary, CNPolicy, NSArray;

@interface CNPropertyGroupsDataSource : NSObject

@property (retain, nonatomic) CNMutableContact *mutableContact;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNPolicy *policy;
@property (retain, nonatomic) NSDictionary *linkedPoliciesByContactIdentifier;
@property (retain, nonatomic) NSArray *prohibitedPropertyKeys;
@property (retain, nonatomic) NSDictionary *propertyGroups;

- (void).cxx_destruct;
- (id)allDisplayPropertyItemsForPropertyKeys:(id)a0;
- (id)allDisplayPropertyItemsFromGroups:(id)a0;
- (void)buildPropertyGroups;
- (Class)groupClassForProperty:(id)a0;
- (id)initWithMutableContact:(id)a0 contactStore:(id)a1 policy:(id)a2 linkedPolicies:(id)a3 prohibitedKeys:(id)a4;
- (id)propertyGroupsForKeys:(id)a0;

@end
