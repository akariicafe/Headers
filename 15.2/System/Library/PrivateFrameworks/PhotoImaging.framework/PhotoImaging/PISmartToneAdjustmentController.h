@class NSString, NSDictionary;

@interface PISmartToneAdjustmentController : PIAdjustmentController {
    struct { double exposure; double contrast; double brightness; double shadows; double highlights; double black; double rawHighlights; double localLight; } _smartSettings;
}

@property (class, readonly, nonatomic) NSString *inputLightKey;
@property (class, readonly, nonatomic) NSString *offsetBlackKey;
@property (class, readonly, nonatomic) NSString *offsetBrightnessKey;
@property (class, readonly, nonatomic) NSString *offsetContrastKey;
@property (class, readonly, nonatomic) NSString *offsetExposureKey;
@property (class, readonly, nonatomic) NSString *offsetHighlightsKey;
@property (class, readonly, nonatomic) NSString *offsetLocalLightKey;
@property (class, readonly, nonatomic) NSString *offsetShadowsKey;
@property (class, readonly, nonatomic) NSString *attributeBrightnessKey;
@property (class, readonly, nonatomic) NSString *attributeContrastKey;
@property (class, readonly, nonatomic) NSString *attributeExposureKey;
@property (class, readonly, nonatomic) NSString *attributeHighlightsKey;
@property (class, readonly, nonatomic) NSString *attributeShadowsKey;
@property (class, readonly, nonatomic) NSString *attributeBlackPointKey;
@property (class, readonly, nonatomic) NSString *attributeLocalLightKey;
@property (class, readonly, nonatomic) NSString *attributeLightMapKey;
@property (class, readonly, nonatomic) NSString *attributeLightMapWidthKey;
@property (class, readonly, nonatomic) NSString *attributeLightMapHeightKey;
@property (class, readonly, nonatomic) NSString *overcaptureStatisticsKey;
@property (class, readonly, nonatomic) NSString *sourceSelectionKey;

@property (nonatomic) double inputLight;
@property (nonatomic) double offsetBlack;
@property (nonatomic) double offsetBrightness;
@property (nonatomic) double offsetContrast;
@property (nonatomic) double offsetExposure;
@property (nonatomic) double offsetHighlights;
@property (nonatomic) double offsetLocalLight;
@property (nonatomic) double offsetShadows;
@property (copy, nonatomic) NSDictionary *statistics;
@property (nonatomic) long long sourceSelection;
@property (copy, nonatomic) NSDictionary *overcaptureStatistics;

+ (id)inputExposureKey;
+ (id)statisticsKey;
+ (id)inputRawHighlightsKey;
+ (id)inputLocalLightKey;
+ (id)inputBlackKey;
+ (id)inputHighlightsKey;
+ (id)inputShadowsKey;
+ (id)inputContrastKey;
+ (id)inputBrightnessKey;

- (double)inputLocalLight;
- (void)setInputExposure:(double)a0;
- (double)inputExposure;
- (double)inputShadows;
- (void)setInputShadows:(double)a0;
- (double)inputHighlights;
- (void)setInputHighlights:(double)a0;
- (void)setInputBlack:(double)a0;
- (double)inputRawHighlights;
- (void)setInputRawHighlights:(double)a0;
- (void)setInputLocalLight:(double)a0;
- (double)inputBlack;
- (double)inputBrightness;
- (void)setInputBrightness:(double)a0;
- (double)inputContrast;
- (void)setInputContrast:(double)a0;
- (id)initWithAdjustment:(id)a0;
- (void)_updateSettingsWithInputLight:(double)a0;
- (id)computedSettings;

@end
