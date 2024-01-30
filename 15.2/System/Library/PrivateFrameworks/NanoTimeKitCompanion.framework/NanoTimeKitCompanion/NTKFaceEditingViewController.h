@class NTKFace, NTKFaceEditView;

@interface NTKFaceEditingViewController : UIViewController {
    NTKFaceEditView *_editView;
}

@property (readonly, nonatomic) NTKFace *face;
@property (readonly, nonatomic) long long currentEditMode;

- (void)loadView;
- (void).cxx_destruct;
- (void)activate;
- (void)willActivate;
- (void)dealloc;
- (id)initWithFace:(id)a0;
- (void)faceColorEditOptionsChanged;
- (void)willDeactivate;
- (void)deactivateWithCompletion:(id /* block */)a0;

@end
