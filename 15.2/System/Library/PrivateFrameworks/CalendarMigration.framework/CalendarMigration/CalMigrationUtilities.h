@interface CalMigrationUtilities : NSObject

+ (id)calendarDirectoryForHomeDirectory:(id)a0;
+ (id)validatedCalendarDirectoryForHomeDirectory:(id)a0;
+ (id)homeRelativePathForURL:(id)a0 inCalendarDirectory:(id)a1;
+ (id)subdirectoriesInDirectory:(id)a0 withPrivacySafePathProvider:(id)a1 error:(id *)a2;
+ (void)enumerateSelfAndDetachedEventsWithEvent:(const void *)a0 usingBlock:(id /* block */)a1;

@end
