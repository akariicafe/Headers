@interface IMDExposureNotificationManager : NSObject

+ (id)sharedInstance;

- (id)_enManager;
- (BOOL)_bagDisabled;
- (id)_allowedDomains;
- (id)_enURLsForMessageBody:(id)a0;
- (BOOL)_isMessageItemEligibleForEN:(id)a0;
- (id)_enTextMessageForMessageBody:(id)a0;
- (void)processMessageItemForENURL:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
