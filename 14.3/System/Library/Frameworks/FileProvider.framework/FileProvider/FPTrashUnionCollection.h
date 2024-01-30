@class FPQueryCollection, NSObject;
@protocol OS_dispatch_queue;

@interface FPTrashUnionCollection : FPUnionCollection {
    id _providerDomainChangesToken;
    FPQueryCollection *_trashQueryCollection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) FPQueryCollection *trashQueryCollection;

- (void).cxx_destruct;
- (id)filterDomains:(id)a0;
- (void)updateCollectionsForDomains:(id)a0;
- (void)fetchTrashItemsFromProvider:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithQueryCollection:(id)a0;
- (id)scopedSearchQuery;
- (void)setDesiredNumberOfItems:(id)a0;
- (void)setAllowedFileTypes:(id)a0;
- (void)setExcludedFileTypes:(id)a0;

@end
