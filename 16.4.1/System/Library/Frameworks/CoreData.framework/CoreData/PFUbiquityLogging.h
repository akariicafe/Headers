@interface PFUbiquityLogging : NSObject

@property (nonatomic) int desiredLogLevel;

+ (void)initialize;
+ (BOOL)canLogMessageAtLevel:(int)a0;
+ (void)setLoggingLevel:(int)a0;

- (void)dealloc;
- (id)init;
- (void)userDefaultsChanged:(id)a0;

@end
