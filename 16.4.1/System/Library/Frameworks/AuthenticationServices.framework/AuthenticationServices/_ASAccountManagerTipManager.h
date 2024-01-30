@interface _ASAccountManagerTipManager : NSObject

+ (void)fetchTipToShow:(id /* block */)a0;
+ (void)userDidAcknowledgeTip:(long long)a0;
+ (void)_acknowledgeTip:(long long)a0;
+ (void)_checkEligibilityForiCloudKeychainTipWithCompletionHandler:(id /* block */)a0;
+ (id)_defaultKeyForTipType:(long long)a0;
+ (BOOL)_hasAcknowledgedTip:(long long)a0;
+ (id)_refreshDateForTip:(long long)a0;

@end
