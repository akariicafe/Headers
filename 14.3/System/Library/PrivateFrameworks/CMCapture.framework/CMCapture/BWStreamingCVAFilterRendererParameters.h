@class NSString, BWColorLookupCache, NSData, CIFilter;

@interface BWStreamingCVAFilterRendererParameters : NSObject <BWFilterRendererParameters> {
    BOOL _studioAndContourRenderingEnabled;
    BOOL _stageRenderingEnabled;
}

@property (readonly, retain, nonatomic) BWColorLookupCache *colorLookupCache;
@property (retain, nonatomic) NSData *foregroundColorLookupTable;
@property (retain, nonatomic) NSData *backgroundColorLookupTable;
@property (retain, nonatomic) CIFilter *colorFilter;
@property (readonly, nonatomic) long long renderingStrategy;
@property (readonly, nonatomic) short type;
@property (readonly, nonatomic) float interpolationFractionComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)_ensureParametersForColorFilter:(id)a0 outputRenderingStrategy:(long long *)a1;
- (id)initWithColorFilter:(id)a0 colorLookupCache:(id)a1 studioAndContourRenderingEnabled:(BOOL)a2 stageRenderingEnabled:(BOOL)a3;
- (int)prepareForRenderingWithInputVideoFormat:(id)a0;
- (void)updateByInterpolatingFromParameters:(id)a0 toParameters:(id)a1 withFractionComplete:(float)a2;
- (BOOL)shouldInterpolateFromParameters:(id)a0 toParameters:(id)a1;

@end
