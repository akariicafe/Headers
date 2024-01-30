@class NSString;

@interface _UIDataSourceSnapshotter : NSObject <NSCopying, _UIDataSourceSnapshotTranslating> {
    struct vector<_NSRange, std::allocator<_NSRange>> { struct _NSRange *__begin_; struct _NSRange *__end_; struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { struct _NSRange *__value_; } __end_cap_; } _sectionRanges;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)snapshotterForSectionCountsProvider:(id /* block */)a0;
+ (id)snapshotterForSnapshot:(id)a0;
+ (id)snapshotterForDataSourceBackedView:(id)a0;

- (long long)numberOfItems;
- (long long)numberOfSections;
- (id)initWithSectionCountsProvider:(id /* block */)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForSection:(long long)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)initWithDataSourceBackedView:(id)a0;
- (long long)numberOfItemsBeforeSection:(long long)a0;
- (BOOL)_decrementSectionCount:(long long)a0 byCount:(long long)a1;
- (BOOL)_incrementSectionCount:(long long)a0 byCount:(long long)a1;
- (void)_resetToStateOfSnapshotter:(id)a0;
- (id)snapshot;
- (BOOL)indexPathIsSectionAppendingInsert:(id)a0;
- (id)indexPathForGlobalIndex:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_recomputeRangeLocations;
- (BOOL)_deleteSection:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_insertSection:(long long)a0 withInitialCount:(long long)a1;
- (id)initWithSectionCounts:(id)a0;
- (long long)sectionForGlobalIndex:(long long)a0;
- (id).cxx_construct;
- (id)indexPathForAppendingInsertInSection:(long long)a0;
- (BOOL)_deleteAllSections;
- (BOOL)_decrementSectionCount:(long long)a0;
- (long long)globalIndexForIndexPath:(id)a0;
- (BOOL)_incrementSectionCount:(long long)a0;

@end
