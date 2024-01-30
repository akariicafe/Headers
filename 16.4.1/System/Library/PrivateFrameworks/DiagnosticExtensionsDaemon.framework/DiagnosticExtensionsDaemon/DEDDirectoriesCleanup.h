@interface DEDDirectoriesCleanup : NSObject

+ (void)run;
+ (BOOL)shouldRun;
+ (BOOL)isDryRun;
+ (void)didRun;

@end
