@class WFOpacitySliderView, NSArray, WFFileRepresentation, WFOverlayImageEditorCanvasView, WFOverlayImageEditorOptionsView, NSLayoutConstraint, NSMapTable, WFImage;

@interface WFOverlayImageEditorViewController : UIViewController <WFOverlayImageEditorOptionsViewDelegate>

@property (retain, nonatomic) WFImage *overlayImage;
@property (copy, nonatomic) NSArray *fileRepresentations;
@property (retain, nonatomic) WFFileRepresentation *currentFile;
@property (retain, nonatomic) NSMapTable *transforms;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (weak, nonatomic) WFOverlayImageEditorOptionsView *optionsView;
@property (weak, nonatomic) WFOverlayImageEditorCanvasView *canvasView;
@property (weak, nonatomic) WFOpacitySliderView *opacityView;
@property (retain, nonatomic) NSLayoutConstraint *opacityViewVerticalConstraint;
@property (nonatomic) BOOL rotationEnabled;
@property (nonatomic) BOOL opacitySliderVisible;

- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (id)editorBackgroundColor;
- (void)resetOverlayImageViewTransformations;
- (void)cancelEditingImage;
- (void)finishEditingImage;
- (id)initWithFileRepresentations:(id)a0 overlayImage:(id)a1 completionHandler:(id /* block */)a2;
- (void)didChangeOpacity:(id)a0;

@end
