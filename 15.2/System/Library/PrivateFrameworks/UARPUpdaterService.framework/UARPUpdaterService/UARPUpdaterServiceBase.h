@interface UARPUpdaterServiceBase : NSObject <UARPUpdaterService>

- (id)init;
- (void)getMatchingServicesListWithReply:(id /* block */)a0;
- (void)getBSDNotificationsListWithReply:(id /* block */)a0;
- (void)getDASActivityListWithReply:(id /* block */)a0;
- (void)ioKitRuleMatched:(id)a0;
- (void)bsdNotificationReceived:(id)a0;
- (void)dasActivityReceived:(id)a0;
- (void)consentReceived:(id)a0;
- (void)consentReceivedPostLogoutMode:(id)a0;
- (void)disabledProductIdentifiers:(id)a0;
- (void)getIsBusyStatusWithReply:(id /* block */)a0;

@end
