@interface PFUbiquityLogging : NSObject

@property (nonatomic) int desiredLogLevel;

+ (void)initialize;
+ (void)setLoggingLevel:(int)a0;
+ (BOOL)canLogMessageAtLevel:(int)a0;

- (void)userDefaultsChanged:(id)a0;
- (id)init;
- (void)dealloc;

@end
