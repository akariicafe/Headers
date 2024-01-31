@interface AXBTwiceRemoteScreenManager : NSObject

@property (nonatomic) BOOL started;

+ (void)initializeMonitor;

- (void)updateSettings;
- (void)setTwiceRemoteScreenEnabled:(BOOL)a0;

@end
