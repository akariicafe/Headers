@class NSOrderedSet, _UITreeDataSourceSnapshotter;
@protocol _UITreeDataSourceSnapshotter;

@interface _NSDiffableDataSourceSectionSnapshotState : NSObject <NSCopying> {
    _UITreeDataSourceSnapshotter *_snapshotter;
    NSOrderedSet *_guaranteedPerformanceIdentifiers;
    unsigned long long _identifierLookupCount;
}

@property (readonly, nonatomic) id<_UITreeDataSourceSnapshotter> snapshotter;
@property (readonly, nonatomic) NSOrderedSet *identifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)willBecomeWiredToDataSource;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (BOOL)containsIdentifier:(id)a0;
- (void).cxx_destruct;
- (long long)indexOfIdentifier:(id)a0;
- (id)initWithSnapshotter:(id)a0 identifiers:(id)a1;
- (id)initWithSnapshotter:(id)a0 identifiers:(id)a1 identifiersHaveGuaranteedPerformance:(BOOL)a2;
- (id)snapshotterMutableCopy;

@end
