@interface _UIScreenEdgePanRecognizerCornerSettings : _UISettings

@property (nonatomic) double cornerSize;
@property (nonatomic) double cornerAngleWindow;
@property (nonatomic) double cornerAngleWindowDegreees;

+ (id)keyPathsForValuesAffectingCornerAngleWindowDegreees;
+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
