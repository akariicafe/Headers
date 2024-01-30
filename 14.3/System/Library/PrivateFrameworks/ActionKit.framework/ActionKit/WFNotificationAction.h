@interface WFNotificationAction : WFAction

- (void)runAsynchronouslyWithInput:(id)a0;
- (void)getNotificationAttachmentsWithInput:(id)a0 completionHandler:(id /* block */)a1;
- (void)runWithUserNotificationCenterInput:(id)a0;
- (id)actionAlert;

@end
