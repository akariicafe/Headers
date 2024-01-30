@interface PlaybackCapabilities : NSObject

+ (BOOL)canPlaybackThree1080P30Streams;
+ (BOOL)canPlaybackThree1080P60Streams;
+ (BOOL)canDropFrameWhenSpeedUp;

@end
