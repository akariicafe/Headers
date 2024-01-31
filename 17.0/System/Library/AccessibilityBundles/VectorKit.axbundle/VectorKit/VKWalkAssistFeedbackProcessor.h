@class VKToneGenerator;

@interface VKWalkAssistFeedbackProcessor : NSObject

@property (retain, nonatomic) VKToneGenerator *toneGenerator;
@property (nonatomic) long long pitchMode;
@property (nonatomic) double minProximityThreshold;
@property (nonatomic) double maxProximityThreshold;
@property (nonatomic) BOOL isFacingLocation;
@property (nonatomic) BOOL shouldPlayAudio;

+ (id)fourPitchesThresholdArray;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_voiceOverStatusChanged;
- (void)stopProcessing;
- (int)_mmFromMeters:(int)a0;
- (void)_updateProximityThresholdsIfNeededForDistance:(int)a0;
- (id)initWithToneGenerator:(id)a0;
- (void)processPulseFeedbackForDistance:(int)a0 shouldProcessHapticPulse:(BOOL)a1;

@end
