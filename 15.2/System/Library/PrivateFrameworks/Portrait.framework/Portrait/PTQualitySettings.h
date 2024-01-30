@class NSString;

@interface PTQualitySettings : NSObject {
    NSString *_description;
}

@property int quality;
@property int numberOfPatternCircles;
@property BOOL rayMarchAll;
@property BOOL rayMarch;
@property BOOL doDisparityUpsampling;
@property BOOL doFocusEdgeMask;
@property BOOL doFirstLevelGaussianDownsample;
@property BOOL usePrecomputedGaussianNoise;
@property BOOL doMacroApertureLimit;
@property float renderDownscale;
@property BOOL doIntermediate2XUpscale;

+ (id)createWithQuality:(int)a0 config:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)updateDescription;

@end
