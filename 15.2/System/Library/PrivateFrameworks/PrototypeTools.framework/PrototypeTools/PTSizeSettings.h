@interface PTSizeSettings : PTSettings

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) struct CGSize { double x0; double x1; } sizeValue;

+ (BOOL)ignoresKey:(id)a0;
+ (id)settingsControllerModule;

- (id)drillDownSummary;

@end
