@interface NewsFeed.LayeredMediaViewDisplayStateCoordinator : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ isEnabled;
    void /* unknown type, empty encoding */ visibilityTracking;
    void /* unknown type, empty encoding */ onChangeBlock;
    void /* unknown type, empty encoding */ isBackgrounded;
    void /* unknown type, empty encoding */ backingView;
    void /* unknown type, empty encoding */ lastDisplayState;
}

- (void)sceneDidEnterBackground;
- (void)sceneWillEnterForeground;
- (void)reduceMotionStatusDidChange;

@end
