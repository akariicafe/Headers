@interface LogDumpUtility : NSObject

+ (BOOL)shouldCleanupFiles;
+ (id)getCachesDirectoryPath;
+ (id)logFilename:(int)a0 dumpID:(id)a1 logNameType:(int)a2 prefix:(id)a3 suffix:(id)a4;
+ (void)removeFilesInDirectory:(id)a0 olderThan:(id)a1;
+ (id)createFileListSortedByTimestamp:(id)a0;
+ (BOOL)createDirectory:(id)a0;
+ (void)removeOldFilesInDefaultLogDumpPath;
+ (id)getDefaultLogDumpPath;

@end
