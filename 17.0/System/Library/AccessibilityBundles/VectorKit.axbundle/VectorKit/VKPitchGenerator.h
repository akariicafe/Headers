@class NSNumber, NSArray;

@interface VKPitchGenerator : NSObject

@property (nonatomic) long long pitchMode;
@property (retain, nonatomic) NSNumber *minPitch;
@property (retain, nonatomic) NSNumber *maxPitch;
@property (retain, nonatomic) NSNumber *twoPitchesThreshold;
@property (retain, nonatomic) NSArray *fourPitchesThresholdArray;
@property (retain, nonatomic) NSNumber *slope;
@property (retain, nonatomic) NSNumber *intercept;

+ (id)AXVectorKitBundle;
+ (id)defaultSoundFileURL;
+ (id)fourPitchesSoundFileArray;
+ (id)twoPitchesSoundFileArray;

- (void).cxx_destruct;
- (id)fileForDepthInUnit:(double)a0;
- (id)initWithFourPitchesThresholdArray:(id)a0;
- (id)initWithMinPitch:(id)a0 maxPitch:(id)a1 minDepth:(id)a2 maxDepth:(id)a3;
- (id)initWithPitchMode:(long long)a0 minDepth:(id)a1 maxDepth:(id)a2 minPtich:(id)a3 maxPitch:(id)a4 twoPitchesThreshold:(id)a5 fourPitchesThresholdArray:(id)a6;
- (id)initWithTwoPitchesThreshold:(id)a0;
- (float)pitchForDepth:(int)a0;

@end
