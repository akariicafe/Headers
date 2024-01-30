@interface VideosUI.LiveLinkManager : NSObject <ICLiveLinkDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ liveLink;
    void /* unknown type, empty encoding */ liveLinkTimeoutWorkItem;
}

- (void)liveLink:(id)a0 didEncounterError:(id)a1 willRetry:(BOOL)a2;
- (void)didStartLiveLink:(id)a0;
- (void)didStopLiveLink:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
