@interface TeaUI.BlueprintViewportMonitor : NSObject <UICollectionViewDelegate, UITableViewDelegate, TUMotionManagerObserver> {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ options;
}

- (void)scrollViewDidScroll:(id)a0;
- (void)motionManager:(id)a0 didUpdateMotionData:(id)a1;
- (void)motionManager:(id)a0 motionEnabled:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;

@end
