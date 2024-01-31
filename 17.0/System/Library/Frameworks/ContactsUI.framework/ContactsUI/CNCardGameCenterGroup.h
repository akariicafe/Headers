@class NSArray;

@interface CNCardGameCenterGroup : CNCardGroup

@property (retain, nonatomic) NSArray *relationshipResults;

+ (id)actionForRelationshipResults:(id)a0 forContact:(id)a1;
+ (BOOL)relationshipResultsContainsFriend:(id)a0;
+ (BOOL)shouldShowAddFriendActionForRelationshipResults:(id)a0;

- (id)displayItems;
- (void).cxx_destruct;
- (id)initWithContact:(id)a0 relationshipResults:(id)a1;

@end
