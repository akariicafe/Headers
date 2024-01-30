@class NSSet;

@interface CalMigrationUtilities : NSObject

@property (class, readonly, nonatomic) NSSet *extensionsForLegacyDirectoriesToDelete;
@property (class, readonly, nonatomic) NSSet *legacyDirectoryNamesToDelete;
@property (class, readonly, nonatomic) NSSet *legacyFileNamesToDelete;

+ (id)calendarDirectoryForHomeDirectory:(id)a0;
+ (void)clearPreviousMigrationResultsWithDatabaseFileURL:(id)a0;
+ (void)enumerateSelfAndDetachedEventsWithEvent:(const void *)a0 usingBlock:(id /* block */)a1;
+ (id)homeRelativePathForURL:(id)a0 inCalendarDirectory:(id)a1;
+ (id)subdirectoriesInDirectory:(id)a0 withPrivacySafePathProvider:(id)a1 error:(id *)a2;
+ (id)validatedCalendarDirectoryForHomeDirectory:(id)a0;

@end
