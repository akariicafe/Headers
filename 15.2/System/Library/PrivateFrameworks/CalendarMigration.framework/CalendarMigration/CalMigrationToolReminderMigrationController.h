@class NSString, CalMigrationToolOptions;
@protocol CalMigrationController;

@interface CalMigrationToolReminderMigrationController : NSObject <CalMigrationController>

@property (readonly, nonatomic) CalMigrationToolOptions *toolOptions;
@property (readonly, nonatomic) id<CalMigrationController> defaultProvider;
@property (readonly, nonatomic) BOOL shouldPerformMigration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)migrationDidFinishWithResult:(unsigned long long)a0;
- (id)initWithToolOptions:(id)a0 defaultProvider:(id)a1;

@end
