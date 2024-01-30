@class NSIndexSet;

@interface _UICollectionViewListSnapshotter : _UIDataSourceSnapshotter {
    NSIndexSet *_topSeparators;
    NSIndexSet *_bottomSeparators;
}

@property (readonly, nonatomic) BOOL displaysAdditionalSeparators;

+ (id)snapshotterForSectionCountsProvider:(id /* block */)a0 topBottomSeparatorProvider:(id /* block */)a1 displaysAdditionalSeparators:(BOOL)a2;

- (id)initWithSectionCountsProvider:(id /* block */)a0 topBottomSeparatorProvider:(id /* block */)a1 displaysAdditionalSeparators:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)hasBottomSeparatorInSection:(long long)a0;
- (BOOL)hasTopSeparatorInSection:(long long)a0;

@end
