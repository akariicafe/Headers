@class NSArray;

@interface CNCardGroupMembershipGroup : CNCardGroup

@property (retain, nonatomic) NSArray *parentGroups;
@property (retain, nonatomic) NSArray *groupsToDisplayForEditing;

- (id)displayItems;
- (void).cxx_destruct;
- (id)title;
- (id)editingItems;
- (id)groupItemsToDisplayForEditing;
- (id)parentGroupItems;

@end
