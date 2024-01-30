@class NSString, BWColorLookupCache, NSData, CIFilter;

@interface BWMetalColorCubeRendererParameters : NSObject <BWFilterRendererParameters>

@property (readonly, retain, nonatomic) BWColorLookupCache *colorLookupCache;
@property (retain, nonatomic) NSData *foregroundColorLookupTable;
@property (retain, nonatomic) NSData *backgroundColorLookupTable;
@property (retain, nonatomic) CIFilter *colorFilter;
@property (readonly, nonatomic) short type;
@property (readonly, nonatomic) float interpolationFractionComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (int)prepareForRenderingWithInputVideoFormat:(id)a0;
- (void)updateByInterpolatingFromParameters:(id)a0 toParameters:(id)a1 withFractionComplete:(float)a2;
- (id)initWithColorFilter:(id)a0 colorLookupCache:(id)a1;

@end
