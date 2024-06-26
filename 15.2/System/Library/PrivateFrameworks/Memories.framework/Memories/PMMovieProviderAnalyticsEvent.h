@class NSString, NSDate;

@interface PMMovieProviderAnalyticsEvent : PMCoreAnalyticsEvent <CoreAnalyticsEventProtocol>

@property (nonatomic) long long changedMusicCount;
@property (nonatomic) BOOL didChangeMusic;
@property (nonatomic) BOOL featuredMusicUsed;
@property (nonatomic) long long changedTitleCount;
@property (nonatomic) BOOL didChangeTitle;
@property (nonatomic) long long changedSubTitleCount;
@property (nonatomic) BOOL didChangeSubTitle;
@property (nonatomic) long long changedMoodCount;
@property (nonatomic) BOOL didChangeMood;
@property (nonatomic) long long changedDurationCount;
@property (nonatomic) BOOL didChangeDuration;
@property (nonatomic) long long changedKeyAssetCount;
@property (nonatomic) BOOL didChangeKeyAsset;
@property (nonatomic) long long changedTrimRangeCount;
@property (nonatomic) BOOL didChangeTrimRange;
@property (nonatomic) long long playedAllTheWayThroughCount;
@property (nonatomic) BOOL didPlayAllTheWayThrough;
@property (nonatomic) long long startedPlaybackCount;
@property (nonatomic) BOOL didStartPlayback;
@property (nonatomic) long long sharedCount;
@property (nonatomic) BOOL didShare;
@property (nonatomic) long long editDoneCount;
@property (nonatomic) BOOL didEdit;
@property (nonatomic) long long abortedDuringDownloadCount;
@property (nonatomic) BOOL didAbortDuringDownload;
@property (nonatomic) long long assetCountDeltaFromEditing;
@property (retain, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *memoryCategory;
@property (copy, nonatomic) NSString *memorySubcategory;
@property (nonatomic) long long playPercent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventPayload;
- (void).cxx_destruct;
- (id)init;
- (id)eventName;
- (id)copy;
- (id)eventBySettingFeaturedMusicUsed:(BOOL)a0;
- (id)eventByIncreasingChangedMusicCount;
- (id)eventByAssigningDidChangeMusic;
- (id)eventByIncreasingEditDoneCount;
- (id)eventByAssigningDidEdit;
- (id)eventByIncreasingChangedTitleCount;
- (id)eventByAssigningDidChangeTitle;
- (id)eventByIncreasingChangedSubtitleCount;
- (id)eventByAssigningDidChangeSubTitle;
- (id)eventByIncreasingChangedTrimRangeCount;
- (id)eventByAssigningDidChangeTrimRange;
- (id)eventByIncreasingChangedKeyAssetCount;
- (id)eventByAssigningDidChangeKeyAsset;
- (id)eventByIncreasingAbortedDuringDownloadCount;
- (id)eventByAssigningDidAbortDuringDownload;
- (id)eventByAssigningAssetCountDeltaFromEditingWithCount:(long long)a0;
- (id)eventByIncreasingStartedPlaybackCount;
- (id)eventByAssigningDidStartPlayback;
- (id)eventByIncreasingPlayedAllTheWayThroughCount;
- (id)eventByAssigningDidPlayAllTheWayThrough;
- (id)eventBySettingPlayPercent:(long long)a0;
- (id)eventByIncreasingChangedDurationCount;
- (id)eventByAssigningDidChangeDuration;
- (id)eventByIncreasingChangedMoodCount;
- (id)eventByAssigningDidChangeMood;
- (id)eventByIncreasingSharedCount;
- (id)eventByAssigningDidShare;
- (id)eventBySettingMemoryCategory:(id)a0;
- (id)eventBySettingMemorySubcategory:(id)a0;

@end
