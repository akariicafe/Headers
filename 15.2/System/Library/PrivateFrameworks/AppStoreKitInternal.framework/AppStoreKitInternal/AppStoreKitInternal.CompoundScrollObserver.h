@interface AppStoreKitInternal.CompoundScrollObserver : NSObject <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ children;
}

- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)init;
- (void)scrollViewWillBeginDecelerating:(id)a0;

@end
