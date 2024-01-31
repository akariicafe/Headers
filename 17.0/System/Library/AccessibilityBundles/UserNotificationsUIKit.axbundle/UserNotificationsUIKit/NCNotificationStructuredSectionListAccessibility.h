@interface NCNotificationStructuredSectionListAccessibility : __NCNotificationStructuredSectionListAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_toggleHiddenNotificationsOnAuthenticationChange:(BOOL)a0;
- (id)removeNotificationGroupListsForMigrationPassingTest:(id /* block */)a0 filterRequestsPassingTest:(id /* block */)a1 animate:(BOOL)a2;
- (void)mergeNotificationGroups:(id)a0 reorderGroupNotifications:(BOOL)a1;
- (void)insertNotificationRequest:(id)a0;
- (BOOL)_axIgnoreNotification;
- (void)_axSetIgnoreNotification:(BOOL)a0;
- (id)axStringForRequest:(id)a0 label:(id)a1;

@end
