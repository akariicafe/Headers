@interface _UIScreenEdgePanRecognizerEdgeSettings : _UISettings

@property (nonatomic) double hysteresis;
@property (nonatomic) double edgeRegionSize;
@property (nonatomic) double bottomEdgeRegionSize;
@property (nonatomic) double edgeAngleWindow;
@property (nonatomic) double edgeAngleWindowDegreees;
@property (nonatomic) double edgeAngleWindowDecayTime;
@property (nonatomic) double maximumSwipeDuration;

+ (id)settingsControllerModule;
+ (id)keyPathsForValuesAffectingEdgeAngleWindowDegreees;

- (void)setDefaultValues;

@end
