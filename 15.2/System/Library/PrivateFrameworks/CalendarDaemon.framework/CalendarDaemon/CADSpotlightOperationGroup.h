@interface CADSpotlightOperationGroup : CADOperationGroup

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;
+ (id)whitelistedBundles;
+ (BOOL)requiresEventOrReminderAccess;

- (BOOL)accessGrantedToPerformSelector:(SEL)a0;
- (void)CADPushItemsToSpotlight:(id)a0 reply:(id /* block */)a1;
- (void)CADWaitForSpotlightUpdatesWithReply:(id /* block */)a0;
- (id)_gatherAllCalendarItemUUIDs;

@end
