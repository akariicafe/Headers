@class SKUIURLConnectionRequest;

@interface SKUIGiftPurchaseRequest : NSObject {
    SKUIURLConnectionRequest *_request;
}

- (void).cxx_destruct;
- (id)initWithGift:(id)a0 configuration:(id)a1;
- (void)purchaseWithCompletionBlock:(id /* block */)a0;
- (id)initWithDonation:(id)a0 configuration:(id)a1;
- (id)_requestWithURL:(id)a0 bodyDictionary:(id)a1;

@end
