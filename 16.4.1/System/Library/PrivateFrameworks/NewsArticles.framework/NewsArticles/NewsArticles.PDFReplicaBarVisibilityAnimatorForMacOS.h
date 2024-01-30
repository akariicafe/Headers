@interface NewsArticles.PDFReplicaBarVisibilityAnimatorForMacOS : NSObject <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ shouldHideStatusBar;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ navigationController;
    void /* unknown type, empty encoding */ hoverGestureRecognizer;
    void /* unknown type, empty encoding */ barHideTimer;
    void /* unknown type, empty encoding */ barHider;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)handleHoverGestureWithRecognizer:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
