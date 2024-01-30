@class CLKDevice;

@interface NTKChronoSubDial : SKEffectNode

@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) double labelsRadius;
@property (readonly, nonatomic) double labelsFontSize;
@property (readonly, nonatomic) long long labelsFont;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) struct CGSize { double width; double height; } smallOuter;
@property (readonly, nonatomic) struct CGSize { double width; double height; } smallInner;

+ (id)upper:(double)a0 forDevice:(id)a1;
+ (id)lower:(double)a0 forDevice:(id)a1;

- (void).cxx_destruct;
- (void)applyTransitionFraction:(double)a0 fromTimeScale:(unsigned long long)a1 toTimeScale:(unsigned long long)a2;
- (id)initWithRadius:(double)a0 forDevice:(id)a1;
- (id)addNodes:(id)a0;
- (void)updateTimeScale:(unsigned long long)a0;
- (void)colorize:(id)a0;
- (id)addNodes:(id)a0 to:(id)a1;

@end
