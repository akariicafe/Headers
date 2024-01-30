@class NSDictionary, NSArray;

@interface CNUIGroupContext : NSObject

@property (readonly, nonatomic) NSDictionary *addedGroupsByContainerDict;
@property (readonly, nonatomic) NSArray *removedGroups;

- (void).cxx_destruct;
- (id)initWithAddedGroupsByContainerDict:(id)a0 removedGroups:(id)a1;

@end
