@class NSString;

@interface CADDatabaseStorageManagementOperationGroup : CADOperationGroup <CADDatabaseStorageManagementInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;
+ (BOOL)requiresEventOrReminderAccess;

- (void)CADDatabaseGetStorageUsage:(id /* block */)a0;
- (unsigned long long)sizeAttachments;
- (BOOL)accessGrantedToPerformSelector:(SEL)a0;
- (BOOL)storageManagementAccessGranted;
- (unsigned long long)sizeDirectoryAtPath:(id)a0;
- (unsigned long long)sizeCalendarDirectory;

@end
