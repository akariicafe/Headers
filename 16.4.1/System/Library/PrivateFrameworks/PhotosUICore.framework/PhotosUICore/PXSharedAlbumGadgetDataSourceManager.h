@class NSArray;

@interface PXSharedAlbumGadgetDataSourceManager : PXGadgetDataSourceManager {
    NSArray *_gadgetProviders;
}

- (id)gadgetProviders;
- (void).cxx_destruct;
- (id /* block */)gadgetSortComparator;
- (id)initWithGadgetProviders:(id)a0;

@end
