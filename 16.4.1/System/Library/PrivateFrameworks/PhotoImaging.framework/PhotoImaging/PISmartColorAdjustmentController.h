@class NSString, NSDictionary;

@interface PISmartColorAdjustmentController : PIAdjustmentController {
    struct { double p75; double p98; double autoValue; double g98; } _stats;
    struct { double sat; double contrast; double cast; } _smartSettings;
}

@property (class, readonly, nonatomic) NSString *inputColorKey;
@property (class, readonly, nonatomic) NSString *offsetSaturationKey;
@property (class, readonly, nonatomic) NSString *offsetContrastKey;
@property (class, readonly, nonatomic) NSString *offsetCastKey;
@property (class, readonly, nonatomic) NSString *attributeContrastKey;
@property (class, readonly, nonatomic) NSString *attributeVibrancyKey;
@property (class, readonly, nonatomic) NSString *attributeCastKey;

@property (nonatomic) double inputColor;
@property (nonatomic) double offsetSaturation;
@property (nonatomic) double offsetContrast;
@property (nonatomic) double offsetCast;
@property (copy, nonatomic) NSDictionary *statistics;

+ (id)inputCastKey;
+ (id)inputContrastKey;
+ (id)inputSaturationKey;
+ (id)statisticsKey;

- (double)inputContrast;
- (void)setInputContrast:(double)a0;
- (double)inputSaturation;
- (double)inputCast;
- (void)setInputCast:(double)a0;
- (void)setInputSaturation:(double)a0;
- (void)_updateSettingsWithInputColor:(double)a0;
- (id)computedSettings;
- (id)initWithAdjustment:(id)a0;
- (id)pasteKeysForMediaType:(long long)a0;

@end
