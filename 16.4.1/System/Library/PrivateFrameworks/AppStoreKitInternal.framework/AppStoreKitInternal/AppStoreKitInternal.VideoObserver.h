@interface AppStoreKitInternal.VideoObserver : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ playerItemObserversAdded;
    void /* unknown type, empty encoding */ playerObserversAdded;
    void /* unknown type, empty encoding */ timeBoundaryObserver;
}

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)videoPlaybackDidStall;
- (id)init;
- (void)videoDidPlayToEnd;
- (void).cxx_destruct;
- (void)playbackErrorOccurredWithNotification:(id)a0;

@end
