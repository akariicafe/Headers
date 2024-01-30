@class NSArray;

@interface PXSharedAlbumGadgetDataSourceManager : PXGadgetDataSourceManager {
    NSArray *_gadgetProviders;
}

- (id /* block */)gadgetSortComparator;
- (void).cxx_destruct;
- (id)gadgetProviders;
- (id)initWithGadgetProviders:(id)a0;

@end
