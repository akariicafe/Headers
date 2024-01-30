@class NSArray, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WLKOfferManager : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSArray *offers;

+ (id)_offerFullPath;
+ (id)defaultOfferManager;
+ (id)_offerPath;

- (id)_updateOfferFile;
- (void)_activeAccountChangedNotification:(id)a0;
- (void)_setOffers:(id)a0;
- (id)_offers;
- (void)saveOffer:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearOffers:(id /* block */)a0;
- (void)removeOfferByBadgeId:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (id)_connection;
- (void)fetchOffers:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
