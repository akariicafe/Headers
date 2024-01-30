@interface VUIPlaybackUpNextConfig : NSObject

@property (nonatomic) double bootstrapInterval;
@property (nonatomic) double documentUpdateOffsetInterval;
@property (nonatomic) unsigned long long maximumAutoPlayableItems;
@property (nonatomic) double duration;
@property (nonatomic) double autoPlayTimerDuration;
@property (nonatomic) double minAutoPlayStopTime;
@property (nonatomic) double minTimeIntervalFromEndToDisplay;

- (id)init;

@end
