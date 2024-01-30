@interface VisionKit.ImageAnalysisInteractionDelegateProxy : NSObject <VKCImageAnalysisInteractionDelegate> {
    void /* unknown type, empty encoding */ owner;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentsRectForImageAnalysisInteraction:(id)a0;
- (BOOL)imageAnalysisInteraction:(id)a0 shouldBeginAtPoint:(struct CGPoint { double x0; double x1; })a1 forAnalysisType:(unsigned long long)a2;
- (id)contentViewForImageAnalysisInteraction:(id)a0;
- (id)presentingViewControllerForImageAnalysisInteraction:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)imageAnalysisInteraction:(id)a0 highlightSelectedItemsValueDidChange:(BOOL)a1;
- (void)imageAnalysisInteraction:(id)a0 liveTextButtonDidChangeToVisible:(BOOL)a1;

@end
