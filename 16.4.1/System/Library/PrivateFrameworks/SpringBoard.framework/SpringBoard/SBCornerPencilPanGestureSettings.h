@interface SBCornerPencilPanGestureSettings : PTSettings

@property (nonatomic) double cornerHorizontalEdgeLength;
@property (nonatomic) double cornerVerticalEdgeLength;

+ (id)settingsControllerModule;
+ (BOOL)ignoresKey:(id)a0;

- (void)setDefaultValues;

@end
