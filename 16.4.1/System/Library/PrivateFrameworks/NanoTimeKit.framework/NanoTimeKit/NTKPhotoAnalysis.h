@interface NTKPhotoAnalysis : NSObject <NSCopying, NSSecureCoding> {
    struct { BOOL isComplexBackground; BOOL isColoredText; float textHue; float textSaturation; float textBrightness; float bgHue; float bgSaturation; float bgBrightness; float shadowHue; float shadowSaturation; float shadowBrightness; } _data;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isComplexBackground) BOOL complexBackground;
@property (readonly, nonatomic, getter=isColoredText) BOOL coloredText;
@property (readonly, nonatomic) float textHue;
@property (readonly, nonatomic) float textSaturation;
@property (readonly, nonatomic) float textBrightness;
@property (readonly, nonatomic) float bgHue;
@property (readonly, nonatomic) float bgSaturation;
@property (readonly, nonatomic) float bgBrightness;
@property (readonly, nonatomic) float shadowHue;
@property (readonly, nonatomic) float shadowSaturation;
@property (readonly, nonatomic) float shadowBrightness;
@property (readonly, nonatomic) struct { BOOL x0; BOOL x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; } structure;
@property (readonly, nonatomic) unsigned int version;

+ (id)defaultAnalysis;
+ (id)invalidAnalysis;
+ (BOOL)_dictionaryHasValidValues:(id)a0;
+ (BOOL)_dictionaryPassesBasicCheck:(id)a0;
+ (id)analysisWithImage:(id)a0 alignment:(unsigned long long)a1 deviceSizeClass:(unsigned long long)a2;
+ (BOOL)isValidDictionary:(id)a0;

- (id)initFromDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)textHue;
- (float)bgBrightness;
- (float)bgHue;
- (float)bgSaturation;
- (id)encodeAsDictionary;
- (id)initWithStructure:(struct { BOOL x0; BOOL x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; })a0;
- (float)shadowBrightness;
- (float)shadowHue;
- (float)shadowSaturation;
- (struct { BOOL x0; BOOL x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; })structure;
- (float)textBrightness;
- (float)textSaturation;

@end
