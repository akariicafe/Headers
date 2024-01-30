@class NTKCompanionSyncedAlbumEditor, NSString, _NTKCFaceDetailAlbumChooserViewController, NTKFace;
@protocol NTKCFaceDetailAlbumChooserViewControllerDelegate;

@interface NTKCFaceDetailAlbumChooserViewController : NTKCNavigationController <_NTKCFaceDetailAlbumChooserViewControllerDelegate> {
    _NTKCFaceDetailAlbumChooserViewController *_implementationVC;
}

@property (readonly, nonatomic) NTKCompanionSyncedAlbumEditor *editor;
@property (readonly, nonatomic) NTKFace *face;
@property (readonly, nonatomic) BOOL inGallery;
@property (weak, nonatomic) id<NTKCFaceDetailAlbumChooserViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_albumChooserDidFinish:(id)a0;
- (id)initWithPhotosEditor:(id)a0 forFace:(id)a1 inGallery:(BOOL)a2;

@end
