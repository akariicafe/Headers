@interface CADSourceOperationGroup : CADOperationGroup <CADSourceInterface>

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;
+ (BOOL)requiresEventOrReminderAccess;

- (void)CADDatabaseGetLocalSourceWithEnableIfNeeded:(BOOL)a0 reply:(id /* block */)a1;
- (void)CADSourceGetManagedConfigurationAccountAccess:(id)a0 reply:(id /* block */)a1;
- (void)CADSourceRefresh:(id)a0 isUserRequested:(BOOL)a1 reply:(id /* block */)a2;
- (int)_tryPerformBlockWithSourceID:(id)a0 forAction:(unsigned long long)a1 entityType:(int)a2 withBlock:(id /* block */)a3;
- (void)CADSourceGetConstraints:(id)a0 reply:(id /* block */)a1;
- (void)CADRemoveCalendarItemsOlderThanDate:(id)a0 ofType:(int)a1 inSource:(id)a2 reply:(id /* block */)a3;
- (void)CADSourceGetGrantedDelegatesList:(id)a0 reply:(id /* block */)a1;
- (int)_tryPerformBlockWithSourceID:(id)a0 forAction:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (void)CADSourceUpdateGrantedDelegate:(id)a0 action:(long long)a1 sourceID:(id)a2 reply:(id /* block */)a3;
- (void)CADDatabaseGetLocalBirthdaySource:(id /* block */)a0;
- (void)CADCountCalendarItemsOfType:(int)a0 inSource:(id)a1 reply:(id /* block */)a2;
- (void)CADDatabaseGetSourcesWithFaultedProperties:(id)a0 reply:(id /* block */)a1;
- (void)CADSourceGetNotificationCollection:(id)a0 reply:(id /* block */)a1;

@end
