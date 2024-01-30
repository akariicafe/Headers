@interface SBHomeGestureExclusionTrapezoidSettings : PTSettings

@property (nonatomic) BOOL showExclusionTrapezoidDebugView;
@property (nonatomic) BOOL landscapeTrapezoidEnabled;
@property (nonatomic) BOOL allowHorizontalSwipesOutsideLandscapeTrapezoid;
@property (nonatomic) double landscapeTrapezoidHeight;
@property (nonatomic) double landscapeTrapezoidBaseHeight;
@property (nonatomic) double landscapeTrapezoidAdjacentXDistanceFromEdge;
@property (nonatomic) double landscapeTrapezoidOpposingXDistanceFromEdge;
@property (nonatomic) BOOL portraitTrapezoidEnabled;
@property (nonatomic) BOOL portraitTrapezoidEnabledOnlyForKeyboards;
@property (nonatomic) BOOL allowHorizontalSwipesOutsidePortraitTrapezoid;
@property (nonatomic) double portraitTrapezoidHeight;
@property (nonatomic) double portraitTrapezoidBaseHeight;
@property (nonatomic) double portraitTrapezoidAdjacentXDistanceFromEdge;
@property (nonatomic) double portraitTrapezoidOpposingXDistanceFromEdge;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
