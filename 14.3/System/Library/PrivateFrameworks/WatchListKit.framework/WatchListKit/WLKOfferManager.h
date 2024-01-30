@class NSArray, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WLKOfferManager : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSArray *offers;

+ (id)_offerPath;
+ (id)defaultOfferManager;
+ (id)_offerFullPath;

- (void)clearOffers:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)saveOffer:(id)a0 completionHandler:(id /* block */)a1;
- (id)_offers;
- (void)fetchOffers:(BOOL)a0 completion:(id /* block */)a1;
- (void)_setOffers:(id)a0;
- (id)_connection;
- (void)_activeAccountChangedNotification:(id)a0;

@end
