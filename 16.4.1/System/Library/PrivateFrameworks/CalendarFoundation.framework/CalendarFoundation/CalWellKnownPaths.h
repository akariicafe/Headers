@interface CalWellKnownPaths : NSObject

+ (void)initialize;
+ (id)calendarFileHandlerPath;
+ (BOOL)checkOrCreatePath:(id)a0;
+ (id)eventsPendingChangesPath;
+ (id)realHomeDirectoryPath;
+ (void)resetPaths;

@end
