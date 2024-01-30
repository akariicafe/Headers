@interface SBHFolderSettings : PTSettings

@property (nonatomic) BOOL allowNestedFolders;
@property (nonatomic) BOOL pinchToClose;
@property (nonatomic) double minPinchScale;
@property (nonatomic) BOOL animatesPageScrubbing;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
