@class NSString;

@interface CADDatabaseStorageManagementOperationGroup : CADOperationGroup <CADDatabaseStorageManagementInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;

- (BOOL)accessGrantedToPerformSelector:(SEL)a0;
- (BOOL)storageManagementAccessGranted;
- (void)CADDatabaseGetStorageUsage:(id /* block */)a0;
- (unsigned long long)sizeCalendarDirectory;
- (unsigned long long)sizeAttachments;
- (unsigned long long)sizeDirectoryAtPath:(id)a0;

@end
