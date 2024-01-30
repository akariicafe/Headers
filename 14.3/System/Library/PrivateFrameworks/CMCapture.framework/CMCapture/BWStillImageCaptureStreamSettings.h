@class NSString, NSArray, BWBracketSettings, NSDictionary, NSMutableArray;
@protocol BWAdaptiveBracketingParameters;

@interface BWStillImageCaptureStreamSettings : NSObject <NSSecureCoding> {
    int _referenceFrameIndex;
    NSArray *_timeMachineBracketedCaptureParams;
    NSDictionary *_preBracketFrameCaptureParams;
    NSArray *_unifiedBracketedCaptureParams;
    BOOL _lensStabilizationEnabledForClientBracket;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _adaptiveBracketingLock;
    id<BWAdaptiveBracketingParameters> _adaptiveBracketingParameters;
    NSMutableArray *_adaptivePreBracketFrameCaptureParams;
    NSMutableArray *_adaptiveUnifiedBracketedCaptureParams;
    BOOL _reachedEndOfAdaptiveBracketing;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _adaptiveBracketingLastFramePTS;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *portType;
@property (retain, nonatomic) NSString *sensorIDString;
@property (readonly, nonatomic) int captureType;
@property (readonly, nonatomic) unsigned long long captureFlags;
@property (readonly, nonatomic) int timeMachineFrameCount;
@property (readonly, nonatomic) BWBracketSettings *bracketSettings;
@property (readonly, nonatomic) NSArray *validBracketedCaptureSequenceNumbers;
@property (readonly, nonatomic) BOOL hasValidFrames;
@property (readonly, nonatomic) int expectedFrameCount;
@property (readonly, nonatomic) int expectedFrameCaptureCount;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } preferredTimeMachinePTS;
@property (readonly, nonatomic) int expectedTimeMachineFrameCaptureCount;

- (int)expectedAdaptiveBracketedFrameCaptureCountUsingGroup:(int)a0;
- (id)adaptiveBracketingParameters;
- (id)initWithPortType:(id)a0 captureType:(int)a1 captureFlags:(unsigned long long)a2 referenceFrameIndex:(int)a3 timeMachineBracketedCaptureParams:(id)a4 preBracketFrameCaptureParams:(id)a5 unifiedBracketedCaptureParams:(id)a6 validBracketedCaptureSequenceNumbers:(id)a7;
- (BOOL)isUnifiedBracketingErrorRecoveryFrame:(struct opaqueCMSampleBuffer { } *)a0 isReferenceFrame:(BOOL)a1;
- (void)addAdaptiveUnifiedBracketedCaptureParams:(id)a0 preBracketFrameCaptureParams:(id)a1;
- (id)unifiedBracketedCaptureParams;
- (void)dealloc;
- (int)referenceFrameIndex;
- (id)adaptivePreBracketFrameCaptureParams;
- (void)setAdaptiveBracketingLastFramePTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (unsigned long long)hash;
- (int)adaptiveBracketingGroupCaptureCount;
- (id)initWithCoder:(id)a0;
- (id)initWithPortType:(id)a0 captureType:(int)a1 captureFlags:(unsigned long long)a2 timeMachineFrameCount:(int)a3 bracketSettings:(id)a4 validBracketedCaptureSequenceNumbers:(id)a5;
- (id)description;
- (id)adaptiveUnifiedBracketedCaptureParams;
- (id)timeMachineBracketedCaptureParams;
- (BOOL)isEqual:(id)a0;
- (id)initWithPortType:(id)a0 captureType:(int)a1 captureFlags:(unsigned long long)a2 referenceFrameIndex:(int)a3 adaptiveBracketingParameters:(id)a4;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })adaptiveBracketingLastFramePTS;
- (void)setReachedEndOfAdaptiveBracketing:(BOOL)a0;
- (int)currentExpectedAdaptiveBracketedFrameCaptureCount;
- (void)setLensStabilizationEnabledForClientBracket:(BOOL)a0;
- (id)preBracketFrameCaptureParams;
- (BOOL)reachedEndOfAdaptiveBracketing;
- (void)encodeWithCoder:(id)a0;
- (BOOL)lensStabilizationEnabledForClientBracket;

@end
