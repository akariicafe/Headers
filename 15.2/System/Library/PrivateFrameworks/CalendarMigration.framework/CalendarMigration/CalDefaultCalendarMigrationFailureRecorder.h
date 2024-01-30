@class NSString;

@interface CalDefaultCalendarMigrationFailureRecorder : NSObject <CalCalendarMigrationFailureRecorder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)recordMigrationFailure:(id)a0;

@end
