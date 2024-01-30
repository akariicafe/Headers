@interface VUIOfferUtilities : NSObject

+ (void)registerDeviceForCommerceOffers;
+ (void)_handleOfferDataSource:(id)a0 appContext:(id)a1;
+ (void)fetchAndPresentOffer:(id)a0 sourceEvent:(id)a1 completion:(id /* block */)a2;

@end
