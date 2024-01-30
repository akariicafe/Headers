@class NSUUID, NSMutableSet, UIImage;

@interface TabSnapshotCacheEntry : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic, getter=isGroup) BOOL group;
@property (readonly, nonatomic) NSMutableSet *groupMembers;
@property (retain, nonatomic) UIImage *snapshot;
@property (nonatomic) long long state;
@property (nonatomic, getter=isUpdatingState) BOOL updatingState;
@property (nonatomic) BOOL stateUpdateCancelled;
@property (nonatomic) BOOL fitsInCache;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithIdentifier:(id)a0 isGroup:(BOOL)a1;

@end
