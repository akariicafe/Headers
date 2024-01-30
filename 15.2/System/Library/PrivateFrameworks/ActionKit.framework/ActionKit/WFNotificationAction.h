@interface WFNotificationAction : WFAction

- (void)runAsynchronouslyWithInput:(id)a0;
- (id)contentDestinationWithError:(id *)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)getNotificationAttachmentsWithInput:(id)a0 completionHandler:(id /* block */)a1;
- (void)runWithUserNotificationCenterInput:(id)a0;
- (id)actionAlert;

@end
