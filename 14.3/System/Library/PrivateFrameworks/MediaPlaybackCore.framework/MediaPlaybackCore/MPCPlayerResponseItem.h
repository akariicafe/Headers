@class NSString, NSArray, MPModelGenericObject, MPCPlayerResponse, NSIndexPath;

@interface MPCPlayerResponseItem : NSObject <_MPCStateDumpPropertyListTransformable> {
    unsigned long long _seekSupport;
}

@property (readonly, weak, nonatomic) MPCPlayerResponse *response;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) MPModelGenericObject *metadataObject;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (readonly, nonatomic, getter=isAutoPlay) BOOL autoPlay;
@property (readonly, nonatomic) NSString *contentItemIdentifier;
@property (readonly, nonatomic) long long revision;
@property (readonly, nonatomic) struct { double snapshotTime; double startTime; double endTime; double duration; double elapsedDuration; float rate; float defaultRate; BOOL isLiveContent; BOOL isLoading; } duration;
@property (readonly, nonatomic) NSString *localizedDurationString;
@property (readonly, nonatomic) NSString *explicitBadge;
@property (readonly, nonatomic) NSArray *languageOptionGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remove;
- (id)initWithModelGenericObject:(id)a0 indexPath:(id)a1 response:(id)a2;
- (id)_stateDumpObject;
- (void).cxx_destruct;
- (id)startPictureInPicture;
- (id)playbackRateCommand;
- (id)likeCommand;
- (id)wishlistCommand;
- (id)_feedbackCommandWithMediaRemoteCommand:(unsigned int)a0;
- (id)_buildLanguageOptionGroups:(id)a0 currentLanguageOptions:(id)a1;
- (unsigned long long)_determineSeekSupport;
- (id)dislikeCommand;
- (id)rateCommand;
- (id)seekCommand;

@end
