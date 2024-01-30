@interface CADSourceOperationGroup : CADOperationGroup <CADSourceInterface>

+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;

- (void)CADRemoveCalendarItemsOlderThanDate:(id)a0 ofType:(int)a1 inSource:(id)a2 reply:(id /* block */)a3;
- (void)CADSourceGetConstraints:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseGetSourcesWithFaultedProperties:(id)a0 reply:(id /* block */)a1;
- (void)CADSourceGetManagedConfigurationAccountAccess:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseGetLocalBirthdaySource:(id /* block */)a0;
- (void)CADCountCalendarItemsOfType:(int)a0 inSource:(id)a1 reply:(id /* block */)a2;
- (void)CADSourceRefresh:(id)a0 isUserRequested:(BOOL)a1 reply:(id /* block */)a2;
- (int)_tryPerformBlockWithSourceID:(id)a0 forAction:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (void)CADDatabaseGetLocalSource:(id /* block */)a0;
- (void)CADSourceUpdateGrantedDelegatePermission:(id)a0 sourceID:(id)a1 reply:(id /* block */)a2;
- (int)_tryPerformBlockWithSourceID:(id)a0 forAction:(unsigned long long)a1 entityType:(int)a2 withBlock:(id /* block */)a3;
- (void)CADSourceGetNotificationCollection:(id)a0 reply:(id /* block */)a1;
- (void)CADSourceGetGrantedDelegatesList:(id)a0 reply:(id /* block */)a1;

@end
