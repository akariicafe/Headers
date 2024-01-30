@class UIAirDropNode, NSArray, NSDiffableDataSourceSnapshot, SHSheetContentDataSourceState;

@interface SHSheetContentDataSource : NSObject

@property (readonly, nonatomic) SHSheetContentDataSourceState *state;
@property (readonly, nonatomic) long long excludeSectionTypes;
@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *diffableSnapshot;
@property (readonly, copy, nonatomic) NSArray *peopleProxies;
@property (readonly, copy, nonatomic) NSArray *shareProxies;
@property (readonly, copy, nonatomic) NSArray *actionProxies;
@property (readonly, nonatomic) unsigned int nearbyCountSlotID;
@property (readonly, nonatomic) UIAirDropNode *airDropProxy;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)_createDiffableSnapshotFromCurrentState;
- (id)actionProxyForIdentifier:(id)a0;
- (id)activityForIdentifier:(id)a0;
- (BOOL)containsSectionForIdentifier:(id)a0;
- (id)createChangeRequestFromCurrentState;
- (id)identifierForActivity:(id)a0;
- (id)initWithState:(id)a0 excludeSectionTypes:(long long)a1;
- (id)peopleProxyForIdentifier:(id)a0;
- (id)shareProxyForIdentifier:(id)a0;

@end
