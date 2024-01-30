@interface MXMOSSignpostSampleTag : MXMSampleTag

@property (class, readonly, copy, nonatomic) MXMOSSignpostSampleTag *timestamp;
@property (class, readonly, copy, nonatomic) MXMOSSignpostSampleTag *duration;
@property (class, readonly, copy, nonatomic) MXMOSSignpostSampleTag *animationFrameCount;
@property (class, readonly, copy, nonatomic) MXMOSSignpostSampleTag *animationFrameRate;
@property (class, readonly, copy, nonatomic) MXMOSSignpostSampleTag *animationGlitchTimeRatio;
@property (class, readonly, copy, nonatomic) MXMOSSignpostSampleTag *animationNumberOfGlitches;
@property (class, readonly, copy, nonatomic) MXMOSSignpostSampleTag *animationGlitchesTotalDuration;
@property (class, readonly, copy, nonatomic) MXMOSSignpostSampleTag *animationNonFirstFrameGlitchTimeRatioAdjusted;
@property (class, readonly, copy, nonatomic) MXMOSSignpostSampleTag *animationNonFirstFrameNumberOfGlitches;
@property (class, readonly, copy, nonatomic) MXMOSSignpostSampleTag *animationNonFirstFrameGlitchesTotalDuration;
@property (class, readonly, copy, nonatomic) MXMOSSignpostSampleTag *telemetryNumber1;
@property (class, readonly, copy, nonatomic) MXMOSSignpostSampleTag *telemetryNumber2;

@end
