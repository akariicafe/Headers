@class NSArray, NSDictionary, MGGroupsQueryAgent;

@interface MGGroupsMediator : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_groups;
}

@property (copy, nonatomic) NSArray *activities;
@property (nonatomic, getter=hasPendingChanges) BOOL pendingChanges;
@property (readonly, weak, nonatomic) MGGroupsQueryAgent *queryAgent;

- (void)endActivity:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addGroup:(id)a0;
- (void)removeGroup:(id)a0;
- (void)removeGroupWithIdentifier:(id)a0;
- (id)group:(id)a0 renameTo:(id)a1;
- (id)currentGroups;
- (id)group:(id)a0 addMember:(id)a1;
- (id)group:(id)a0 removeMember:(id)a1;
- (id)groupsForUpdate_unsafe;
- (id)groups_unsafe;
- (id)initWithGroupsQueryAgent:(id)a0;
- (void)removeGroup:(id)a0 ifExists_unsafe:(BOOL *)a1;
- (id)startActivityWithName:(id)a0;
- (void)upsertGroup_unsafe:(id)a0;

@end
