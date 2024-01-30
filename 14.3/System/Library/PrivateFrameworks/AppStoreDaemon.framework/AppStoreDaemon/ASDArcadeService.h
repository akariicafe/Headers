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

- (id)init;
- (void).cxx_destruct;
- (void)addHardwareOfferIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)allHardwareOffersIDsWithReplyHandler:(id /* block */)a0;
- (void)removeAllHardwareOfferIDsWithReplyHandler:(id /* block */)a0;
- (void)removeHardwareOfferIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)hardwareOfferCountWithReplyHandler:(id /* block */)a0;
- (id)_initWithServiceBroker:(id)a0;

@end
