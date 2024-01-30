@interface PUMedusaSettings : PXSettings

@property (nonatomic) double _desiredWidth;
@property (nonatomic) double _widthDelay;
@property (nonatomic) double _testStartDelay;
@property (nonatomic) double _testInterval;
@property (nonatomic) double _testIncrement;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (void)runSizeTest;

- (id)parentSettings;

@end
