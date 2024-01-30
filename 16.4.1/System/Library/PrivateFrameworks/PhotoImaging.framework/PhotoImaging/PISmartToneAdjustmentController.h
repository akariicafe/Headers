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

@property (readonly, nonatomic) double inputLightDefault;
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

+ (id)inputShadowsKey;
+ (id)inputBlackKey;
+ (id)inputBrightnessKey;
+ (id)inputContrastKey;
+ (id)inputExposureKey;
+ (id)inputHighlightsKey;
+ (id)inputLocalLightKey;
+ (id)inputRawHighlightsKey;
+ (id)statisticsKey;

- (double)inputHighlights;
- (void)setInputExposure:(double)a0;
- (double)inputContrast;
- (void)setInputShadows:(double)a0;
- (void)setInputHighlights:(double)a0;
- (double)inputBlack;
- (double)inputBrightness;
- (double)inputExposure;
- (void)setInputRawHighlights:(double)a0;
- (void)setInputBrightness:(double)a0;
- (double)inputShadows;
- (double)inputRawHighlights;
- (double)inputLocalLight;
- (void)setInputBlack:(double)a0;
- (void)setInputLocalLight:(double)a0;
- (void)setInputContrast:(double)a0;
- (void)_updateSettingsWithInputLight:(double)a0;
- (id)autoKeysForPaste;
- (id)computedSettings;
- (id)initWithAdjustment:(id)a0;
- (id)pasteKeysForMediaType:(long long)a0;

@end
