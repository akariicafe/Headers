@interface SBCornerPencilPanGestureSettings : PTSettings

@property (nonatomic) double cornerHorizontalEdgeLength;
@property (nonatomic) double cornerVerticalEdgeLength;

+ (BOOL)ignoresKey:(id)a0;
+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
