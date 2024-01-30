@class UIView;
@protocol WKImageAnalysisGestureRecognizerDelegate;

@interface WKImageAnalysisGestureRecognizer : UILongPressGestureRecognizer {
    UIView<WKImageAnalysisGestureRecognizerDelegate> *_imageAnalysisGestureRecognizerDelegate;
}

- (void)setState:(long long)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithImageAnalysisGestureDelegate:(id)a0;
- (void)beginAfterExceedingForceThresholdIfNeeded:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
