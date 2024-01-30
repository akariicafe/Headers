@interface TVPPlaybackUtilities : NSObject

+ (double)playedThresholdTimeForDuration:(double)a0;
+ (double)suggestedBookmarkTimeForElapsedTime:(double)a0 duration:(double)a1;
+ (long long)blueDotStateForDuration:(double)a0 elapsedTime:(double)a1 hasBeenPlayed:(BOOL)a2 playCount:(unsigned long long)a3;
+ (long long)blueDotStateForDuration:(double)a0 elapsedTime:(double)a1 hasBeenPlayed:(BOOL)a2 playCount:(unsigned long long)a3 respectPlayCount:(BOOL)a4;
+ (double)suggestedBookmarkTimeForElapsedTime:(double)a0 duration:(double)a1 playedThreshold:(id)a2;

@end
