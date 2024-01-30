@class NSString, _NTKCFaceDetailCustomPhotosViewController, NTKFace, NTKCompanionCustomPhotosEditor;
@protocol NTKCFaceDetailCustomPhotosViewControllerDelegate;

@interface NTKCFaceDetailCustomPhotosViewController : NTKCNavigationController <NTKCFaceDetailCustomPhotosViewControllerDelegate> {
    _NTKCFaceDetailCustomPhotosViewController *_implementationVC;
}

@property (retain, nonatomic) NTKCompanionCustomPhotosEditor *editor;
@property (retain, nonatomic) NTKFace *face;
@property (readonly, nonatomic) BOOL inGallery;
@property (weak, nonatomic) id<NTKCFaceDetailCustomPhotosViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPhotosEditor:(id)a0 forFace:(id)a1 inGallery:(BOOL)a2 faceView:(id)a3 externalImagesSet:(BOOL)a4;
- (void)customPhotosControllerDidFinish:(id)a0;

@end
