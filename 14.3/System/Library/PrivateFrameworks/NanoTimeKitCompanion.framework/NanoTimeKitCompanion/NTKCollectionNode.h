@class NSArray, SKAction, CLKDevice;

@interface NTKCollectionNode : SKNode

@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) NSArray *nodes;
@property (retain, nonatomic) SKAction *appearAction;
@property (retain, nonatomic) SKAction *disappearAction;
@property (copy, nonatomic) id /* block */ animateBlock;
@property (nonatomic) double radius;

+ (id)ticks60UtilitarianForDevice:(id)a0;
+ (id)hours4ForDevice:(id)a0;
+ (id)hours12ForDevice:(id)a0;
+ (id)minutesUtilitarianForDevice:(id)a0;
+ (id)ticks60ForDevice:(id)a0;
+ (id)ticks120ForDevice:(id)a0;
+ (id)ticksPillsForDevice:(id)a0;
+ (id)ticks240ForDevice:(id)a0;
+ (id)minutesPillsForDevice:(id)a0;
+ (float)outerRadiusForDevice:(id)a0;
+ (float)innerRadiusForDevice:(id)a0;
+ (id)ticks60ChronoForDevice:(id)a0;
+ (id)hoursChronoForDevice:(id)a0;
+ (id)labels60ChronoForDevice:(id)a0;
+ (id)ticks30ChronoForDevice:(id)a0;
+ (id)labels30ChronoForDevice:(id)a0;
+ (id)ticks6ChronoForDevice:(id)a0;
+ (id)labels6ChronoForDevice:(id)a0;
+ (id)labels6_10_40ChronoForDevice:(id)a0;
+ (id)labels3ChronoForDevice:(id)a0;
+ (id)labels3_10_90ChronoForDevice:(id)a0;

- (void).cxx_destruct;
- (id)initForDevice:(id)a0;
- (void)createSubNodes;
- (void)applyAppearanceFraction:(double)a0;
- (void)applyAppearanceFraction:(double)a0 inverted:(BOOL)a1;
- (void)scaleNodes:(id)a0 fraction:(double)a1;
- (void)fade:(double)a0 inverted:(BOOL)a1;
- (id)initForDevice:(id)a0 withName:(id)a1 nodes:(id)a2 animateBlock:(id /* block */)a3;
- (void)updateNodesWithOffset:(unsigned long long)a0 angleMultiplier:(double)a1 scale:(double)a2 rotate:(BOOL)a3 round:(BOOL)a4;
- (void)fadeNodes:(double)a0 except:(id)a1;
- (void)scaleNodes:(double)a0 andResetNodesAtIndices:(id)a1;
- (void)appearAnimated;
- (void)disappearAnimated;
- (void)updateNodesWithOffset:(unsigned long long)a0 angleMultiplier:(double)a1 rotate:(BOOL)a2 round:(BOOL)a3;
- (void)fadeNodes:(double)a0;
- (void)scaleNodes:(double)a0;
- (void)fadeAndScale:(double)a0;

@end
