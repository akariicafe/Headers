@class NSString, ASDServiceBroker;

@interface ASDArcadeService : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;
+ (id)defaultService;

- (void)removeMetricsForBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)removeAllHardwareOfferIDsWithReplyHandler:(id /* block */)a0;
- (void)allBadgeMetricsWithReplyHandler:(id /* block */)a0;
- (void)allHardwareOffersIDsWithReplyHandler:(id /* block */)a0;
- (void)hardwareOfferCountWithReplyHandler:(id /* block */)a0;
- (void)removeAllBadgeIDsWithReplyHandler:(id /* block */)a0;
- (void)removeBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)addBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)showUpsellForItemID:(id)a0 replyHandler:(id /* block */)a1;
- (void)removeHardwareOfferIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)addHardwareOfferIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)badgeCountWithReplyHandler:(id /* block */)a0;
- (void)allHardwareOfferMetricsWithReplyHandler:(id /* block */)a0;
- (void)allBadgeIDsWithReplyHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeHardwareOfferMetricsForOfferIDs:(id)a0 replyHandler:(id /* block */)a1;

@end
