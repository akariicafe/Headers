@interface CACSystemStatusManager : NSObject

@property (nonatomic) BOOL isDictationRunning;

+ (id)sharedManager;

- (id)init;
- (void)_systemDictationStatusDidChange:(BOOL)a0;
- (BOOL)isSystemDictationRunning;

@end
