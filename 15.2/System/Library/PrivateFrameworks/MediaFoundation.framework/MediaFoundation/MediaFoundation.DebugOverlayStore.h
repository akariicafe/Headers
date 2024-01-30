@interface MediaFoundation.DebugOverlayStore : NSObject <MRNowPlayingControllerDelegate> {
    void /* unknown type, empty encoding */ playerPath;
    void /* unknown type, empty encoding */ contentItemID;
    void /* unknown type, empty encoding */ _image;
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ nowPlayingController;
    void /* unknown type, empty encoding */ _contentItem;
    void /* unknown type, empty encoding */ _audioDetailsExpanded;
    void /* unknown type, empty encoding */ _playerDetailsExpanded;
    void /* unknown type, empty encoding */ __playbackState;
    void /* unknown type, empty encoding */ __nowPlayingContentItemID;
    void /* unknown type, empty encoding */ _supportedCommands;
    void /* unknown type, empty encoding */ _queueDetailsSupported;
    void /* unknown type, empty encoding */ _queueDetailsLoading;
    void /* unknown type, empty encoding */ _queueDetailsRevision;
    void /* unknown type, empty encoding */ _queueDetails;
    void /* unknown type, empty encoding */ _queueDetailsSyncEnabled;
    void /* unknown type, empty encoding */ _eventsSupported;
    void /* unknown type, empty encoding */ _eventsLoading;
    void /* unknown type, empty encoding */ _eventsRevision;
    void /* unknown type, empty encoding */ _events;
}

- (void)controller:(id)a0 didUpdateResponse:(id)a1;
- (void)controller:(id)a0 didLoadResponse:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
