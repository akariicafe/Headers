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

- (void)_activeAccountChangedNotification:(id)a0;
- (id)_connection;
- (void)clearOffers:(id /* block */)a0;
- (id)_offers;
- (void)_setOffers:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeOfferByBadgeId:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveOffer:(id)a0 completionHandler:(id /* block */)a1;
- (id)_updateOfferFile;
- (void)fetchOffers:(BOOL)a0 completion:(id /* block */)a1;

@end
