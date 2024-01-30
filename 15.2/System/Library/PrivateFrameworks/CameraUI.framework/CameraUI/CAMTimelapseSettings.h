@interface CAMTimelapseSettings : NSObject

@property (readonly, nonatomic) double initialCaptureTimeInterval;
@property (readonly, nonatomic) double maxOutputFPS;
@property (readonly, nonatomic) double maxOutputLength;
@property (readonly, nonatomic) long long maxOutputFrames;
@property (readonly, nonatomic) long long maxMovieWriteAttempts;
@property (readonly, nonatomic) long long maxFailedStateReadAttempts;

+ (id)sharedInstance;

- (double)waitTimeBeforeNextWriteForNumberOfPreviousAttempts:(long long)a0;
- (id)_outputSettingsPresetForWidth:(long long)a0 height:(long long)a1;
- (id)outputSettingsForWidth:(long long)a0 height:(long long)a1 videoFormatDescription:(struct opaqueCMFormatDescription { } *)a2 framesPerSecond:(long long)a3 frameCount:(long long)a4 useHEVC:(BOOL)a5;
- (long long)_averageMovieBitrateForWidth:(long long)a0 height:(long long)a1 useHEVC:(BOOL)a2;
- (double)outputFPSForFrameCount:(long long)a0;
- (long long)maxMovieFileLengthForWidth:(long long)a0 height:(long long)a1 useHEVC:(BOOL)a2;
- (id)init;
- (long long)minAvailableBytesNeededForCaptureForWidth:(long long)a0 height:(long long)a1 useHEVC:(BOOL)a2;

@end
