@class NSNumber, NSMutableDictionary, CLKDevice;

@interface CLKDeviceMetrics : NSObject {
    CLKDevice *_device;
    unsigned long long _identitySizeClass;
    NSMutableDictionary *_scales;
}

@property (nonatomic) unsigned long long roundingBehavior;
@property (retain, nonatomic) NSNumber *newestAllowedSizeClass;

+ (id)metricsWithDevice:(id)a0 identitySizeClass:(unsigned long long)a1;

- (void).cxx_destruct;
- (unsigned long long)_effectiveSizeClass;
- (struct CGSize { double x0; double x1; })constantSize:(struct CGSize { double x0; double x1; })a0 withOverrides:(id)a1;
- (double)constantValue:(double)a0 withOverride:(double)a1 forSizeClass:(unsigned long long)a2;
- (double)constantValue:(double)a0 withOverrides:(id)a1;
- (struct CGPoint { double x0; double x1; })scaledPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })scaledPoint:(struct CGPoint { double x0; double x1; })a0 withOverride:(struct CGPoint { double x0; double x1; })a1 forSizeClass:(unsigned long long)a2;
- (struct CGPoint { double x0; double x1; })scaledPoint:(struct CGPoint { double x0; double x1; })a0 withOverrides:(id)a1;
- (struct CGSize { double x0; double x1; })scaledSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })scaledSize:(struct CGSize { double x0; double x1; })a0 withOverride:(struct CGSize { double x0; double x1; })a1 forSizeClass:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })scaledSize:(struct CGSize { double x0; double x1; })a0 withOverrides:(id)a1;
- (double)scaledValue:(double)a0;
- (double)scaledValue:(double)a0 withOverride:(double)a1 forSizeClass:(unsigned long long)a2;
- (double)scaledValue:(double)a0 withOverrides:(id)a1;
- (void)setScale:(double)a0 forSizeClass:(unsigned long long)a1;
- (double)valueCompact:(double)a0 regular:(double)a1 luxoCompact:(double)a2 luxoRegular:(double)a3 aloeCompact:(double)a4 aloeRegular:(double)a5 agave:(double)a6;
- (double)_unroundedScaledValue:(double)a0;
- (struct CGPoint { double x0; double x1; })constantPoint:(struct CGPoint { double x0; double x1; })a0 withOverride:(struct CGPoint { double x0; double x1; })a1 forSizeClass:(unsigned long long)a2;
- (struct CGPoint { double x0; double x1; })constantPoint:(struct CGPoint { double x0; double x1; })a0 withOverrides:(id)a1;
- (struct CGSize { double x0; double x1; })constantSize:(struct CGSize { double x0; double x1; })a0 withOverride:(struct CGSize { double x0; double x1; })a1 forSizeClass:(unsigned long long)a2;
- (id)initWithDevice:(id)a0 identitySizeClass:(unsigned long long)a1;
- (struct CGPoint { double x0; double x1; })pointCompact:(struct CGPoint { double x0; double x1; })a0 regular:(struct CGPoint { double x0; double x1; })a1 luxoCompact:(struct CGPoint { double x0; double x1; })a2 luxoRegular:(struct CGPoint { double x0; double x1; })a3 aloeCompact:(struct CGPoint { double x0; double x1; })a4 aloeRegular:(struct CGPoint { double x0; double x1; })a5;
- (struct CGPoint { double x0; double x1; })pointCompact:(struct CGPoint { double x0; double x1; })a0 regular:(struct CGPoint { double x0; double x1; })a1 luxoCompact:(struct CGPoint { double x0; double x1; })a2 luxoRegular:(struct CGPoint { double x0; double x1; })a3 aloeCompact:(struct CGPoint { double x0; double x1; })a4 aloeRegular:(struct CGPoint { double x0; double x1; })a5 agave:(struct CGPoint { double x0; double x1; })a6;
- (struct CGSize { double x0; double x1; })sizeCompact:(struct CGSize { double x0; double x1; })a0 regular:(struct CGSize { double x0; double x1; })a1 luxoCompact:(struct CGSize { double x0; double x1; })a2 luxoRegular:(struct CGSize { double x0; double x1; })a3 aloeCompact:(struct CGSize { double x0; double x1; })a4 aloeRegular:(struct CGSize { double x0; double x1; })a5;
- (struct CGSize { double x0; double x1; })sizeCompact:(struct CGSize { double x0; double x1; })a0 regular:(struct CGSize { double x0; double x1; })a1 luxoCompact:(struct CGSize { double x0; double x1; })a2 luxoRegular:(struct CGSize { double x0; double x1; })a3 aloeCompact:(struct CGSize { double x0; double x1; })a4 aloeRegular:(struct CGSize { double x0; double x1; })a5 agave:(struct CGSize { double x0; double x1; })a6;
- (double)valueCompact:(double)a0 regular:(double)a1 luxoCompact:(double)a2 luxoRegular:(double)a3 aloeCompact:(double)a4 aloeRegular:(double)a5;

@end
