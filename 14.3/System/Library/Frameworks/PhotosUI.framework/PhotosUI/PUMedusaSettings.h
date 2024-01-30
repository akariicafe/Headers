@interface PUMedusaSettings : PXSettings

@property (nonatomic) double _desiredWidth;
@property (nonatomic) double _widthDelay;
@property (nonatomic) double _testStartDelay;
@property (nonatomic) double _testInterval;
@property (nonatomic) double _testIncrement;

+ (id)sharedInstance;
+ (void)runSizeTest;
+ (id)settingsControllerModule;

- (id)parentSettings;

@end
