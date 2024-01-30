@interface _UIScreenEdgePanRecognizerCornerSettings : _UISettings

@property (nonatomic) double cornerSize;
@property (nonatomic) double cornerAngleWindow;
@property (nonatomic) double cornerAngleWindowDegreees;

+ (id)settingsControllerModule;
+ (id)keyPathsForValuesAffectingCornerAngleWindowDegreees;

- (void)setDefaultValues;

@end
