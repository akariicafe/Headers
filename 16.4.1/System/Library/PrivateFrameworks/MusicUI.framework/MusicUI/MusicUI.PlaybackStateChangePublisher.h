@interface MusicUI.PlaybackStateChangePublisher : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ playbackManager;
    void /* unknown type, empty encoding */ onContentReloadTrigger;
    void /* unknown type, empty encoding */ nowPlayingItemDescriptor;
    void /* unknown type, empty encoding */ playbackState;
}

- (void)nowPlayingItemDidChange:(id)a0;
- (void)playbackStateDidChange:(id)a0;

@end
