@interface DBSDisplayZoomConfigurationController : NSObject

@property (class, readonly, nonatomic) DBSDisplayZoomConfigurationController *defaultController;

- (id)currentDisplayZoomMode;
- (id)displayZoomModes;
- (void)setDisplayZoomMode:(id)a0 withRelaunchURL:(id)a1;

@end
