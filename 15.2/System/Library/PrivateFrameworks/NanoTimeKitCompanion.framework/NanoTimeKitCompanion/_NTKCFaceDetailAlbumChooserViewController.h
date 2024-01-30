@class NTKCompanionSyncedAlbumEditor, NTKFace, NSMutableArray, PHAssetCollection;
@protocol _NTKCFaceDetailAlbumChooserViewControllerDelegate;

@interface _NTKCFaceDetailAlbumChooserViewController : PUAlbumListViewController {
    NSMutableArray *_allAlbums;
    PHAssetCollection *_syncedAlbum;
    PHAssetCollection *_selectedAlbum;
}

@property (retain, nonatomic) NTKCompanionSyncedAlbumEditor *editor;
@property (retain, nonatomic) NTKFace *face;
@property (nonatomic) BOOL inGallery;
@property (weak, nonatomic) id<_NTKCFaceDetailAlbumChooserViewControllerDelegate> delegate;

+ (void)initialize;

- (id)_title;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)showAddNewAlbumPlaceholder;
- (void)_reloadData;
- (void)sessionInfoStatusDidChange:(id)a0;
- (BOOL)_shouldShowAggregateItem;
- (BOOL)shouldShowAllPhotosItem;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_set_allAlbums;
- (void)_set_selectedAlbum;
- (void)_appendCollectionsWithType:(long long)a0 subtype:(long long)a1;
- (id)initWithPhotosEditor:(id)a0 forFace:(id)a1 inGallery:(BOOL)a2;

@end
