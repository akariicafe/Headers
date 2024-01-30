@protocol ICDocCamImageQuadEditPanGestureRecognizerDelegate;

@interface ICDocCamImageQuadEditPanGestureRecognizer : UIPanGestureRecognizer

@property (weak, nonatomic) id<ICDocCamImageQuadEditPanGestureRecognizerDelegate> quadEditorDelegate;

- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
