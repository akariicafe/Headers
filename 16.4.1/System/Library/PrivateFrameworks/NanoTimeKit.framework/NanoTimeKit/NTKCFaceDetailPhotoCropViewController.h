@class _NTKCFaceDetailPhotoCropViewController, NTKDigitalTimeLabelStyle, NTKFace, NTKCompanionCustomPhotosEditor;

@interface NTKCFaceDetailPhotoCropViewController : NTKCNavigationController {
    _NTKCFaceDetailPhotoCropViewController *_implementationVC;
}

@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) NTKCompanionCustomPhotosEditor *editor;
@property (readonly, nonatomic) NTKFace *face;
@property (readonly, nonatomic) NTKDigitalTimeLabelStyle *timeStyle;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithIndex:(unsigned long long)a0 inPhotosEditor:(id)a1 forFace:(id)a2 timeStyle:(id)a3 completionHandler:(id /* block */)a4;

@end
