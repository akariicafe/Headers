@class NSString;

@interface CADNotificationCountOperationGroup : CADOperationGroup <CADNotificationCountInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;
+ (BOOL)requiresEventOrReminderAccess;

- (void)CADDatabaseGetNotificationCount:(id /* block */)a0;

@end
