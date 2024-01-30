@interface TeaUI.CardViewScrollViewCoordinator : NSObject <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isEnabled;
    void /* unknown type, empty encoding */ isTransitioning;
    void /* unknown type, empty encoding */ trackingPollTimer;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ scrollLock;
}

- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
