@class UNUserNotificationCenter, WBSPasswordWarningTopFraudTargetsManager;

@interface WBSPasswordBreachNotificationManager : NSObject {
    UNUserNotificationCenter *_notificationCenter;
    WBSPasswordWarningTopFraudTargetsManager *_topFraudTargetsManager;
}

+ (id)_bodyForSavedPasswords:(id)a0 withTopFraudTargets:(id)a1;
+ (id)_bodyForHighLevelDomains:(id)a0 deviceClass:(int)a1 topFraudTargets:(id)a2;
+ (BOOL)_highLevelDomain:(id)a0 isIncludedInTopFraudTargets:(id)a1;
+ (unsigned long long)_bodyStyleForTopFraudTargetDomains:(id)a0 sensitiveDomains:(id)a1 passwordsCount:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)init;
- (void)addBreachNotificationForSavedPasswords:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_contentWithSavedPasswords:(id)a0 topFraudTargets:(id)a1;
- (id)_titleForSavedPasswords:(id)a0;

@end
