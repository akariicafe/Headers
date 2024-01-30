@interface VideosUI.UnifiedMessagingSignalProvider : NSObject {
    void /* unknown type, empty encoding */ signalLock;
    void /* unknown type, empty encoding */ engagement;
    void /* unknown type, empty encoding */ downloadAndPurchaseAccessQueue;
    void /* unknown type, empty encoding */ mediaLibrary;
    void /* unknown type, empty encoding */ upsellOfferPresented;
    void /* unknown type, empty encoding */ lastPlaybackEvent;
    void /* unknown type, empty encoding */ playbackElapsedTime;
    void /* unknown type, empty encoding */ notifAuthStatus;
    void /* unknown type, empty encoding */ hasEventForTVPlusonLargeTV;
    void /* unknown type, empty encoding */ hasEventForTVPlusonATV;
    void /* unknown type, empty encoding */ hasItunesPurchases;
    void /* unknown type, empty encoding */ hasItunesDownloads;
    void /* unknown type, empty encoding */ hasSubscriptionDownloads;
}

- (void)handleLibraryContentsDidChange:(id)a0;
- (void)debounceActiveDownloadButtonDidChange;
- (void)handleActiveDownloadButtonsDidChange:(id)a0;
- (void)handleAppDidFinishLoading;
- (void)handleDownloadDidStart;
- (void)handleGDPRDidAccept;
- (void)handleHasEventforTVPlus:(id)a0;
- (void)handleHasFavoriteTeamsDidChange:(id)a0;
- (void)handleIsPlaybackUIBeingShownDidChange:(id)a0;
- (void)handleLocationStatusDidChange:(id)a0;
- (void)handleNotifAuthStatusDidChange;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
