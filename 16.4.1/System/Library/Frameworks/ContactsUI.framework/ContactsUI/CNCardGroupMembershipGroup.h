@class NSArray;

@interface CNCardGroupMembershipGroup : CNCardGroup

@property (retain, nonatomic) NSArray *parentGroups;
@property (retain, nonatomic) NSArray *groupsToDisplayForEditing;

- (id)displayItems;
- (id)title;
- (void).cxx_destruct;
- (id)editingItems;
- (id)groupItemsToDisplayForEditing;
- (id)parentGroupItems;

@end
