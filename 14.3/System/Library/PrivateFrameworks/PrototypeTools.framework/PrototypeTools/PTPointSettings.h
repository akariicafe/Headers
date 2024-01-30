@interface PTPointSettings : PTSettings

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) struct CGPoint { double x0; double x1; } pointValue;

+ (BOOL)ignoresKey:(id)a0;
+ (id)settingsControllerModule;

- (id)drillDownSummary;

@end
