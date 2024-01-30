@interface CalWellKnownPaths : NSObject

+ (void)initialize;
+ (id)mailInvitationDropPath;
+ (id)calendarsFolderPath;
+ (id)sandboxCalendarsFolderPath;
+ (void)resetPaths;
+ (id)realHomeDirectoryPath;
+ (BOOL)checkOrCreatePath:(id)a0;
+ (id)calendarFileHandlerPath;
+ (id)calendarCachePath;
+ (id)temporaryFilesPath;
+ (id)eventsPendingChangesPath;
+ (id)calendarSyncChangesPath;
+ (id)calendarClientIdConflictsPath;

@end
