@interface CACSystemStatusManager : NSObject

@property (nonatomic) BOOL isDictationRunning;

+ (id)sharedManager;

- (id)init;
- (BOOL)isSystemDictationRunning;
- (void)_systemDictationStatusDidChange:(BOOL)a0;

@end
