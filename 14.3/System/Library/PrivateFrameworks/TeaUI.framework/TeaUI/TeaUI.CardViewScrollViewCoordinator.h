@interface TeaUI.CardViewScrollViewCoordinator : NSObject <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isEnabled;
    void /* unknown type, empty encoding */ isTransitioning;
    void /* unknown type, empty encoding */ trackingPollTimer;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ scrollLock;
}

- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
