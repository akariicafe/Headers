@class NSProgress, NSString;

@interface PLModelMigrationAction_CPLPrompting : PLModelMigrationActionPreRepair <PLModelMigrationAction>

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)shouldRepromptUserIfNeededWithPathManager:(id)a0;
+ (void)_setLastWelcomedDBVersion;
+ (void)_resetICPLPrompt;

- (long long)performActionWithManagedObjectContext:(id)a0 error:(id *)a1;

@end
