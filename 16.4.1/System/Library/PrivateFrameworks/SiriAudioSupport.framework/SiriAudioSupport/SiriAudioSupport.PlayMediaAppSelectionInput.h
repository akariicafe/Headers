@class NSSet;

@interface SiriAudioSupport.PlayMediaAppSelectionInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ support_unicorn_match;
    void /* unknown type, empty encoding */ type3;
    void /* unknown type, empty encoding */ vq_21;
    void /* unknown type, empty encoding */ INMediaCategoryVideo;
    void /* unknown type, empty encoding */ result_nowPlayingLastBundleRecency;
    void /* unknown type, empty encoding */ INMediaCategoryGeneral;
    void /* unknown type, empty encoding */ type14;
    void /* unknown type, empty encoding */ type18;
    void /* unknown type, empty encoding */ type10;
    void /* unknown type, empty encoding */ type17;
    void /* unknown type, empty encoding */ result_compoundMediaTypeBundleScore;
    void /* unknown type, empty encoding */ support_flag;
    void /* unknown type, empty encoding */ INMediaCategoryMusic;
    void /* unknown type, empty encoding */ result_compoundActiveBundleScore;
    void /* unknown type, empty encoding */ INMediaCategoryRadio;
    void /* unknown type, empty encoding */ result_clientLocaleIdentifier;
    void /* unknown type, empty encoding */ INMediaCategoryPodcasts;
    void /* unknown type, empty encoding */ type0;
    void /* unknown type, empty encoding */ type2;
    void /* unknown type, empty encoding */ unicorn_flag;
    void /* unknown type, empty encoding */ result_entitySearchBundleScore;
    void /* unknown type, empty encoding */ result_mediaNamePresent;
    void /* unknown type, empty encoding */ result_mediaArtistPresent;
    void /* unknown type, empty encoding */ result_clientHourOfDay;
    void /* unknown type, empty encoding */ type5;
    void /* unknown type, empty encoding */ INMediaCategoryAudiobooks;
    void /* unknown type, empty encoding */ type16;
    void /* unknown type, empty encoding */ type4;
    void /* unknown type, empty encoding */ type6;
    void /* unknown type, empty encoding */ type1;
    void /* unknown type, empty encoding */ result_nowPlayingUsage1Day;
    void /* unknown type, empty encoding */ result_nowPlayingBundleScore;
    void /* unknown type, empty encoding */ result_foregroundBundle;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
