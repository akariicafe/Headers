@interface PUBrowsingIrisPlayerChange : PUViewModelChange

@property (nonatomic) BOOL playbackStateDidChange;
@property (nonatomic) BOOL livePhotoDidChange;
@property (nonatomic) BOOL isLivePhotoLoadingAllowedDidChange;
@property (nonatomic) BOOL isLivePhotoPlaybackAllowedDidChange;
@property (nonatomic) BOOL playerDidChange;
@property (nonatomic) BOOL activatedDidChange;
@property (nonatomic) BOOL scrubbingPhotoTimeDidChange;
@property (nonatomic) BOOL currentlyDisplayedTimesDidChange;
@property (nonatomic) BOOL playingDidChange;
@property (nonatomic) BOOL vitalityTransformDidChange;

- (BOOL)hasChanges;

@end
