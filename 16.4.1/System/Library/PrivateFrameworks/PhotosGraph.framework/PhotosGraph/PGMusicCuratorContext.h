@class NSString, NSDictionary;

@interface PGMusicCuratorContext : NSObject {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ blocklistConfiguration;
    void /* unknown type, empty encoding */ cache;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ musicBag;
    void /* unknown type, empty encoding */ adamIDsWithNegativeUserFeedback;
    void /* unknown type, empty encoding */ allowExplicitMusicContent;
    void /* unknown type, empty encoding */ musicCurationOverrideDictionary;
    void /* unknown type, empty encoding */ musicForTopicUseTopicOnly;
    void /* unknown type, empty encoding */ $__lazy_storage_$_keywordsByAdamID;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) void /* unknown type, empty encoding */ useOnlyMusicForTopicInTopPickSuggestions;
@property (nonatomic) void /* unknown type, empty encoding */ allowChillMixElection;
@property (nonatomic) void /* unknown type, empty encoding */ allowGetUpMixElection;
@property (nonatomic) void /* unknown type, empty encoding */ refreshSongMetadata;
@property (nonatomic) void /* unknown type, empty encoding */ forceShareableInBestSuggestions;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ recentlyUsedSongs;
@property (nonatomic, copy) NSDictionary *musicCurationOverrideDictionary;

+ (id)contextWithPhotoLibrary:(id)a0 adamIDsWithNegativeUserFeedback:(id)a1 allowExplicitMusicContent:(id)a2 cache:(id)a3 musicBag:(id)a4 recentlyUsedSongs:(id)a5 error:(id *)a6;

- (id)init;
- (void).cxx_destruct;

@end
