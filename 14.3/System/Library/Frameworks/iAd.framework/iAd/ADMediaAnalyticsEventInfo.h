@interface ADMediaAnalyticsEventInfo : NSObject

@property (nonatomic) double totalDuration;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) double visiblePercentage;
@property (nonatomic) double volume;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
