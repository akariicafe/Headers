@class NSDate;

@interface _TVRCRMSNowPlayingState : NSObject

@property (nonatomic) double playbackRate;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSDate *lastReportedTimestamp;
@property (nonatomic) double lastReportedPlaybackPosition;

+ (id)nowPlayingStateFromInfo:(id)a0;

- (void).cxx_destruct;

@end
