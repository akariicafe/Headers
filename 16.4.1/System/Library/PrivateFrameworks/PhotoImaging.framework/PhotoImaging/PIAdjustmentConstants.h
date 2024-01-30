@class NSString, NSArray;

@interface PIAdjustmentConstants : NSObject

@property (readonly, nonatomic) NSString *PISmartToneAdjustmentKey;
@property (readonly, nonatomic) NSString *PISmartColorAdjustmentKey;
@property (readonly, nonatomic) NSString *PISmartBWAdjustmentKey;
@property (readonly, nonatomic) NSString *PIGrainAdjustmentKey;
@property (readonly, nonatomic) NSString *PIAutoEnhanceAdjustmentKey;
@property (readonly, nonatomic) NSString *PIWhiteBalanceAdjustmentKey;
@property (readonly, nonatomic) NSString *PIRedEyeAdjustmentKey;
@property (readonly, nonatomic) NSString *PIApertureRedEyeAdjustmentKey;
@property (readonly, nonatomic) NSString *PIRetouchAdjustmentKey;
@property (readonly, nonatomic) NSString *PIVignetteAdjustmentKey;
@property (readonly, nonatomic) NSString *PISharpenAdjustmentKey;
@property (readonly, nonatomic) NSString *PINoiseReductionAdjustmentKey;
@property (readonly, nonatomic) NSString *PIDefinitionAdjustmentKey;
@property (readonly, nonatomic) NSString *PICurvesAdjustmentKey;
@property (readonly, nonatomic) NSString *PILevelsAdjustmentKey;
@property (readonly, nonatomic) NSString *PISelectiveColorAdjustmentKey;
@property (readonly, nonatomic) NSString *PIEffectAdjustmentKey;
@property (readonly, nonatomic) NSString *PIEffect3DAdjustmentKey;
@property (readonly, nonatomic) NSString *PICropAdjustmentKey;
@property (readonly, nonatomic) NSString *PITrimAdjustmentKey;
@property (readonly, nonatomic) NSString *PISlomoAdjustmentKey;
@property (readonly, nonatomic) NSString *PILivePhotoKeyFrameAdjustmentKey;
@property (readonly, nonatomic) NSString *PIVideoPosterFrameAdjustmentKey;
@property (readonly, nonatomic) NSString *PIAutoLoopAdjustmentKey;
@property (readonly, nonatomic) NSString *PIHighResFusionAdjustmentKey;
@property (readonly, nonatomic) NSString *PIMuteAdjustmentKey;
@property (readonly, nonatomic) NSString *PIDepthAdjustmentKey;
@property (readonly, nonatomic) NSString *PIPortraitAdjustmentKey;
@property (readonly, nonatomic) NSString *PIOrientationAdjustmentKey;
@property (readonly, nonatomic) NSString *PIRawAdjustmentKey;
@property (readonly, nonatomic) NSString *PIRawNoiseReductionAdjustmentKey;
@property (readonly, nonatomic) NSString *PISemanticEnhanceAdjustmentKey;
@property (readonly, nonatomic) NSString *PIVideoReframeAdjustmentKey;
@property (readonly, nonatomic) NSString *PISourceSelectAdjustmentKey;
@property (readonly, nonatomic) NSString *PIVideoStabilizeAdjustmentKey;
@property (readonly, nonatomic) NSString *PIVideoCrossfadeLoopAdjustmentKey;
@property (readonly, nonatomic) NSString *PIPortraitVideoAdjustmentKey;
@property (readonly, nonatomic) NSString *PISourceAdjustmentKey;
@property (readonly, nonatomic) NSString *PIOvercaptureSourceAdjustmentKey;
@property (readonly, nonatomic) NSArray *allAdjustmentTypes;
@property (readonly, nonatomic) NSArray *nonVisualAdjustmentTypes;

- (id)init;
- (void).cxx_destruct;

@end
