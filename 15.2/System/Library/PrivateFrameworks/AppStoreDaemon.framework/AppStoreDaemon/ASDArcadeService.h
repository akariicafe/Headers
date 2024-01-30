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

- (id)_initWithServiceBroker:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)addHardwareOfferIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)allBadgeMetricsWithReplyHandler:(id /* block */)a0;
- (void)allHardwareOfferMetricsWithReplyHandler:(id /* block */)a0;
- (void)allBadgeIDsWithReplyHandler:(id /* block */)a0;
- (void)allHardwareOffersIDsWithReplyHandler:(id /* block */)a0;
- (void)removeAllBadgeIDsWithReplyHandler:(id /* block */)a0;
- (void)removeAllHardwareOfferIDsWithReplyHandler:(id /* block */)a0;
- (void)removeBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)removeHardwareOfferIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)removeMetricsForBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)badgeCountWithReplyHandler:(id /* block */)a0;
- (void)hardwareOfferCountWithReplyHandler:(id /* block */)a0;
- (void)removeHardwareOfferMetricsForOfferIDs:(id)a0 replyHandler:(id /* block */)a1;

@end
