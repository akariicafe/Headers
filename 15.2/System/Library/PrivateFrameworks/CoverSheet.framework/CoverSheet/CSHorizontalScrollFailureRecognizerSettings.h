@interface CSHorizontalScrollFailureRecognizerSettings : PTSettings

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL viewDebugArea;
@property (nonatomic) unsigned long long maxAllowableVerticalOffset;
@property (nonatomic) double topAngle;
@property (nonatomic) double bottomAngle;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
