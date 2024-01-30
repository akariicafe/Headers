@interface ICQEngagementReporter : NSObject

+ (id)_eventNameForEngagementType:(long long)a0;
+ (void)_sendSubscriptionChangedEvent;
+ (void)_sendBubbleDisplayedEventFor:(id)a0;
+ (void)_sendImpressionEventWithName:(id)a0 bundleID:(id)a1;
+ (id)_placementDictionary;
+ (id)_createOpportunityBubbleFrom:(id)a0 bundleID:(id)a1;
+ (void)sendEventFor:(long long)a0 withBundleID:(id)a1 link:(id)a2;
+ (void)shouldShowOpportunityBubbleWithBundleID:(id)a0 completion:(id /* block */)a1;
+ (void)fetchBubbleContentWithBundleID:(id)a0 completion:(id /* block */)a1;

@end
