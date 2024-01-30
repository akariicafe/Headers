@interface EKNotificationChange : EKObjectChange

+ (int)entityType;
+ (void)fetchNotificationChangesInStore:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchNotificationChangesInSource:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchNotificationChangesInCalendar:(id)a0 resultHandler:(id /* block */)a1;

@end
