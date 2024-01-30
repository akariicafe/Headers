@class NSSet;

@interface SiriAudioSupport.PlayMediaAppSelectionInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ result_clientCarConnected;
    void /* unknown type, empty encoding */ result_clientCarplay;
    void /* unknown type, empty encoding */ result_clientDaylight;
    void /* unknown type, empty encoding */ result_clientDevice;
    void /* unknown type, empty encoding */ result_clientHourOfDay;
    void /* unknown type, empty encoding */ result_clientIsActiveForegroundApp;
    void /* unknown type, empty encoding */ result_clientLocaleIdentifier;
    void /* unknown type, empty encoding */ result_clientLocked;
    void /* unknown type, empty encoding */ result_clientMotion;
    void /* unknown type, empty encoding */ result_clientNavigating;
    void /* unknown type, empty encoding */ result_clientWorkout;
    void /* unknown type, empty encoding */ result_foregroundAppIsLastUsed;
    void /* unknown type, empty encoding */ result_interactionType;
    void /* unknown type, empty encoding */ result_isNowPlayingApp;
    void /* unknown type, empty encoding */ result_mediaArtistPresent;
    void /* unknown type, empty encoding */ result_mediaGenrePresent;
    void /* unknown type, empty encoding */ result_mediaNamePresent;
    void /* unknown type, empty encoding */ result_mediaParsecCategory;
    void /* unknown type, empty encoding */ result_mediaPlaybackLocation;
    void /* unknown type, empty encoding */ result_mediaType;
    void /* unknown type, empty encoding */ result_nowPlayingState;
    void /* unknown type, empty encoding */ result_nowPlayingUsage7Days;
    void /* unknown type, empty encoding */ result_nowPlayingUsage1Day;
    void /* unknown type, empty encoding */ result_nowPlayingUsage14Days;
    void /* unknown type, empty encoding */ result_entitySearchBundleScore;
    void /* unknown type, empty encoding */ result_entitySearchBundleRecency;
    void /* unknown type, empty encoding */ result_foregroundAppElapsedSeconds;
    void /* unknown type, empty encoding */ result_nowPlayingLastBundle;
    void /* unknown type, empty encoding */ result_nowPlayingLastBundleRecency;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
