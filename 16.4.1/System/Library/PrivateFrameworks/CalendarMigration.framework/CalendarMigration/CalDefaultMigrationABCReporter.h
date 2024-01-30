@class NSString;

@interface CalDefaultMigrationABCReporter : NSObject <CalMigrationABCReporter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)reportIssueWithType:(id)a0 subtype:(id)a1 context:(id)a2 events:(id)a3;

@end
