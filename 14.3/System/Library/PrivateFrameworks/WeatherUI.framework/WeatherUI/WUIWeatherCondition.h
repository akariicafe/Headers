@class NSString, CAStateController, City, CALayer, NSMutableArray;

@interface WUIWeatherCondition : NSObject <CALayerDelegate> {
    CALayer *_rootLayer;
}

@property (retain, nonatomic) NSMutableArray *gyroLayers;
@property (retain, nonatomic) CAStateController *stateController;
@property (retain, nonatomic) NSString *loadedFileName;
@property (nonatomic) BOOL forcesCondition;
@property (nonatomic) long long forcesNight;
@property (weak, nonatomic) City *city;
@property (nonatomic) BOOL playing;
@property (nonatomic) double alpha;
@property (nonatomic) double speed;
@property (nonatomic) double timeOffset;
@property (nonatomic) BOOL hidden;
@property (readonly, nonatomic) CALayer *layer;
@property (nonatomic) BOOL shouldRasterize;
@property (nonatomic) BOOL multiCityMode;
@property (nonatomic) long long condition;
@property (nonatomic) BOOL isRotating;
@property (nonatomic) unsigned long long CAMLState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)layoutSublayersOfLayer:(id)a0;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)setAlpha:(double)a0 animationDuration:(double)a1;
- (id)init;
- (void).cxx_destruct;
- (void)setCorrectStateForCurrentOrientationAndMode;
- (BOOL)_interfaceConsideredPortraitForCAMLLayerWithSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_interfaceConsideredPortraitForCAMLLayer;
- (void)dealloc;
- (void)setCAMLLayerStateForInterfaceOrientation:(long long)a0 animated:(BOOL)a1;
- (void)setTime:(float)a0;
- (void)setCondition:(long long)a0 animationDuration:(double)a1;
- (void)pause;
- (void)transitionToSize:(struct CGSize { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)setCity:(id)a0 animationDuration:(double)a1;
- (void)resume;

@end
