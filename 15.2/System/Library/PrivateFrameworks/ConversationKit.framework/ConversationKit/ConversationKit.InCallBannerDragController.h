@interface ConversationKit.InCallBannerDragController : NSObject <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ bannerView;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ bannerConstraints;
    void /* unknown type, empty encoding */ largestBannerStateTranslation;
    void /* unknown type, empty encoding */ panGestureRecognizer;
    void /* unknown type, empty encoding */ restingTimer;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)panGestureRecognized:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
