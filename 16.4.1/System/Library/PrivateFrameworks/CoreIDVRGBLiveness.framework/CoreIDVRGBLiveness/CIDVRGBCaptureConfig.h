@class NSArray, NSDictionary, NSData, NSString, NSNumber, UIViewController;

@interface CIDVRGBCaptureConfig : NSObject

@property (retain, nonatomic) id signingKey;
@property (retain, nonatomic) NSData *signingNonce;
@property (nonatomic) const struct __CFString { } *signingAlgorithm;
@property (retain, nonatomic) NSNumber *imageWidth;
@property (retain, nonatomic) NSNumber *imageHeight;
@property (retain, nonatomic) NSNumber *imageCompressionQuality;
@property (retain, nonatomic) NSNumber *timeout;
@property (retain, nonatomic) NSNumber *maxRetakeCount;
@property (retain, nonatomic) id encryptionKey;
@property (nonatomic) const struct __CFString { } *encryptionAlgorithm;
@property (retain, nonatomic) NSDictionary *encryptionParameters;
@property (weak, nonatomic) UIViewController *parentVC;
@property (retain, nonatomic) NSArray *gestureSequence;
@property (retain, nonatomic) NSArray *gestureTypes;
@property (retain, nonatomic) NSNumber *minRequiredGesturesCount;
@property (retain, nonatomic) NSNumber *gestureSkipSoftTimeout;
@property (retain, nonatomic) NSNumber *gestureSkipSoftAccessible;
@property (retain, nonatomic) NSNumber *gestureSkipHardTimeout;
@property (retain, nonatomic) NSNumber *gestureSkipHardAccessible;
@property (retain, nonatomic) NSNumber *faceOutOfBoundFrames;
@property (retain, nonatomic) NSNumber *gestureCompletionDelay;
@property (retain, nonatomic) NSNumber *tutorialVideoDelay;
@property (retain, nonatomic) NSNumber *tutorialVideoDuration;
@property (retain, nonatomic) NSNumber *tutorialResumeDelay;
@property (retain, nonatomic) NSNumber *gestureDetectedSuccessDuration;
@property (retain, nonatomic) NSNumber *lastGestureExtraFrameDuration;
@property (nonatomic) BOOL requiresGoodLux;
@property (nonatomic) long long targetDevice;
@property (retain, nonatomic) NSString *issuerName;
@property (nonatomic) BOOL enablePrintReplay;
@property (nonatomic) BOOL enableIDMatching;

- (void).cxx_destruct;
- (void)sanitize;

@end
