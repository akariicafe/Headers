@class NSArray;
@protocol PXFastEnumeration;

@interface PXDeleteCollectionsAction : PXPhotosAction {
    NSArray *_assetCollections;
    NSArray *_collectionLists;
    id<PXFastEnumeration> _collections;
}

- (id)initWithCollection:(id)a0;
- (id)collections;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (id)initWithCollections:(id)a0;
- (id)actionNameLocalizationKey;
- (void)performRedo:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;

@end
