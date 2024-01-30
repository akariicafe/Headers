@interface CalCrashReporter : NSObject

@property (class, readonly, nonatomic) BOOL isAvailable;

+ (void)simulateCrashWithMessage:(id)a0;

@end
