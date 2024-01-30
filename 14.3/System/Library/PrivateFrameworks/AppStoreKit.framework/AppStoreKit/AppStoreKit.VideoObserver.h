@interface AppStoreKit.VideoObserver : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ playerItemObserversAdded;
    void /* unknown type, empty encoding */ playerObserversAdded;
    void /* unknown type, empty encoding */ timeBoundaryObserver;
}

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)videoDidPlayToEnd;
- (void)videoPlaybackDidStall;
- (void)playbackErrorOccurredWithNotification:(id)a0;

@end
