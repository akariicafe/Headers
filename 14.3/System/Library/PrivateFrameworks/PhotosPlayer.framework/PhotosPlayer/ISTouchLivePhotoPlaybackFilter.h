@class ISDisplayLink, NSDate;

@interface ISTouchLivePhotoPlaybackFilter : ISLivePhotoPlaybackFilter

@property (nonatomic, setter=_setPlaybackReaquestID:) long long _playbackRequestID;
@property (nonatomic, setter=_setDisplayLink:) ISDisplayLink *_displayLink;
@property (retain, nonatomic, setter=_setPlaybackStartDate:) NSDate *_playbackStartDate;
@property (nonatomic, getter=isTouchActive) BOOL touchActive;

- (void)_handleDisplayLink;
- (void).cxx_destruct;
- (void)reset;
- (void)didPerformChanges;
- (long long)_nextPlaybackRequestID;

@end
