@class NSArray;

@interface CNUIGroupEditingContext : NSObject

@property (retain, nonatomic) NSArray *addedGroups;
@property (retain, nonatomic) NSArray *removedGroups;
@property (readonly, nonatomic) NSArray *originalGroups;
@property (readonly, nonatomic) NSArray *groupsToDisplayForEditing;

- (id)init;
- (void).cxx_destruct;
- (void)addGroup:(id)a0;
- (BOOL)group:(id)a0 isInGroupArray:(id)a1;
- (id)initWithOriginalGroups:(id)a0;
- (void)removeGroup:(id)a0;

@end
