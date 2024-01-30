@interface NewsArticles.PDFReplicaBarVisibilityAnimatorForiOS : NSObject <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ navigationController;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ barHider;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)handleTapGesture;
- (void).cxx_destruct;
- (id)init;

@end
