@class NSString;

@interface FCPurchaseOfferableConfiguration : NSObject

@property (copy, nonatomic) NSString *purchaseID;
@property (nonatomic) BOOL allowsPublisherPhoneApp;
@property (nonatomic) BOOL allowsPublisherPadApp;
@property (nonatomic) BOOL allowsPublisherWebsite;
@property (nonatomic) BOOL preferredOffer;

- (void).cxx_destruct;
- (id)initWithPurchaseID:(id)a0 allowsPublisherPhoneApp:(BOOL)a1 allowsPublisherPadApp:(BOOL)a2 allowsPublisherWebsite:(BOOL)a3 preferredOffer:(BOOL)a4;

@end
