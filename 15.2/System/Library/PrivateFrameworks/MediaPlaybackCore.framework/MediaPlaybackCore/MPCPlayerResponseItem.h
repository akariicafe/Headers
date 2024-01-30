@class NSString, NSArray, MPCPlayerAudioFormat, MPModelGenericObject, MPCPlayerResponse, MPCPlayerResponseParticipant, MPCPlayerAudioRoute, NSIndexPath;
@protocol MPCPlayerResponseItemMusicAudio;

@interface MPCPlayerResponseItem : NSObject <MPCPlayerResponseItemMusicAudio> {
    unsigned long long _seekSupport;
}

@property (readonly, weak, nonatomic) MPCPlayerResponse *response;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) MPModelGenericObject *metadataObject;
@property (readonly, nonatomic) MPCPlayerResponseParticipant *enqueueingParticipant;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (readonly, nonatomic, getter=isAutoPlay) BOOL autoPlay;
@property (readonly, copy, nonatomic) NSString *contentItemIdentifier;
@property (readonly, nonatomic) long long revision;
@property (readonly, nonatomic) struct { double snapshotTime; double startTime; double endTime; double duration; double elapsedDuration; float rate; float defaultRate; BOOL isLiveContent; BOOL isLoading; } duration;
@property (readonly, copy, nonatomic) NSString *localizedDurationString;
@property (readonly, copy, nonatomic) NSString *explicitBadge;
@property (readonly, nonatomic) NSArray *languageOptionGroups;
@property (readonly, nonatomic) id<MPCPlayerResponseItemMusicAudio> musicAudio;
@property (readonly, nonatomic) MPCPlayerAudioFormat *preferredFormat;
@property (readonly, nonatomic) MPCPlayerAudioFormat *activeFormat;
@property (readonly, nonatomic) unsigned long long preferredTiers;
@property (readonly, nonatomic) long long activeFormatJustification;
@property (readonly, nonatomic) NSArray *alternateFormats;
@property (readonly, nonatomic) MPCPlayerAudioRoute *audioRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remove;
- (id)rateCommand;
- (id)initWithModelGenericObject:(id)a0 indexPath:(id)a1 response:(id)a2;
- (id)dislikeCommand;
- (id)playbackRateCommand;
- (id)wishlistCommand;
- (id)_buildLanguageOptionGroups:(id)a0 currentLanguageOptions:(id)a1;
- (void).cxx_destruct;
- (id)switchToAlternativeFormat:(id)a0;
- (unsigned long long)_determineSeekSupport;
- (id)likeCommand;
- (id)_stateDumpObject;
- (id)_feedbackCommandWithMediaRemoteCommand:(unsigned int)a0;
- (id)seekCommand;

@end
