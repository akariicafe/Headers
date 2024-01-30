@class NSOrderedSet, _UITreeDataSourceSnapshotter;

@interface _NSDiffableDataSourceSectionSnapshotState : NSObject <NSCopying> {
    struct { unsigned char identifiersHaveGuaranteedPerformance : 1; } _stateFlags;
}

@property (readonly, nonatomic) _UITreeDataSourceSnapshotter *snapshotter;
@property (readonly, nonatomic) NSOrderedSet *identifiers;

- (long long)indexOfIdentifier:(id)a0;
- (id)initWithSnapshotter:(id)a0 identifiers:(id)a1;
- (id)initWithSnapshotter:(id)a0 identifiers:(id)a1 identifiersHaveGuaranteedPerformance:(BOOL)a2;
- (id)description;
- (BOOL)containsIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
