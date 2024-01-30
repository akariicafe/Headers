@interface POConfigurationUtil : NSObject

+ (BOOL)appSSOEnabled;
+ (BOOL)platformSSOEnabled;
+ (id)platformSSOTriggerFile;
+ (void)updateTriggerFile;

@end
