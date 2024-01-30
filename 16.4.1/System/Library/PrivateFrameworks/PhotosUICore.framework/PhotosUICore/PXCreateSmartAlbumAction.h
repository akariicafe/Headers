@class NSString, PHCollectionList, PHAssetCollection;

@interface PXCreateSmartAlbumAction : PXPhotosAction

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) PHCollectionList *parentCollectionList;
@property (copy, nonatomic) NSString *createdCollectionIdentifier;
@property (readonly, nonatomic) PHAssetCollection *createdAssetCollection;

- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (id)actionNameLocalizationKey;
- (id)initWithTitle:(id)a0 parentCollectionList:(id)a1;
- (void)performRedo:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;

@end
