@interface CADSpotlightOperationGroup : CADOperationGroup

+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresEventAccess;
+ (id)whitelistedBundles;
+ (BOOL)requiresReminderAccess;

- (BOOL)accessGrantedToPerformSelector:(SEL)a0;
- (void)CADPushItemsToSpotlight:(id)a0 reply:(id /* block */)a1;
- (id)_gatherAllCalendarItemUUIDs;

@end
