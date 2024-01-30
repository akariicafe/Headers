@interface MediaPlaybackCore.JumpToTimeState : MediaPlaybackCore.State {
    void /* unknown type, empty encoding */ targetTime;
    void /* unknown type, empty encoding */ metadata;
    void /* unknown type, empty encoding */ initialLoadingShouldPlay;
    void /* unknown type, empty encoding */ playbackDidStall;
    void /* unknown type, empty encoding */ jumpToTimeInfo;
    void /* unknown type, empty encoding */ suppressed;
    void /* unknown type, empty encoding */ deferredPlayerEvent;
}

@end
