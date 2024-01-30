@class NSMutableArray;

@interface _GKASKResourceCacheGroup : NSObject {
    NSMutableArray *_memberContents;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _guard;
}

@property BOOL hasMultipleMembers;

- (id)init;
- (void).cxx_destruct;
- (id)makeMemberContents;
- (void)discardMemberContents:(id)a0;
- (id)snapshotMemberContents;
- (id)onlyMemberContents;

@end
