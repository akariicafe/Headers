@class NSOrderedSet, _UITreeDataSourceSnapshotter;

@interface _NSDiffableDataSourceSectionSnapshotState : NSObject <NSCopying>

@property (readonly, nonatomic) _UITreeDataSourceSnapshotter *snapshotter;
@property (readonly, nonatomic) NSOrderedSet *identifiers;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithSnapshotter:(id)a0 identifiers:(id)a1;

@end
