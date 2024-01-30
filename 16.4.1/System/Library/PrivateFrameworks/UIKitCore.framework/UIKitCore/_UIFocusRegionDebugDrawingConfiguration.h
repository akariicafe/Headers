@class UIColor;

@interface _UIFocusRegionDebugDrawingConfiguration : NSObject

@property (readonly, nonatomic) id associatedObject;
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) double patternAlpha;
@property (readonly, nonatomic) struct CGPattern { } *pattern;
@property (readonly, nonatomic) BOOL dashedStroke;

+ (id)containerGuideConfigurationForRegion:(id)a0;
+ (id)guideConfigurationForRegion:(id)a0;
+ (id)itemConfigurationForRegion:(id)a0;
+ (id)promiseConfigurationForRegion:(id)a0;

- (void).cxx_destruct;
- (id)initWithRegion:(id)a0 baseHue:(double)a1 patternAlpha:(double)a2 dashedStroke:(BOOL)a3;

@end
