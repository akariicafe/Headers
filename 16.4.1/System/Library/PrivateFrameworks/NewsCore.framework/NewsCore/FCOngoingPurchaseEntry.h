@class NSString, NSNumber, NSDate;

@interface FCOngoingPurchaseEntry : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *tagID;
@property (copy, nonatomic) NSString *purchaseID;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL webAccessOptIn;
@property (copy, nonatomic) NSNumber *appAdamID;
@property (copy, nonatomic) NSNumber *storeExternalVersion;
@property (copy, nonatomic) NSString *vendorIdentifier;
@property (copy, nonatomic) NSDate *purchaseInitiatedTime;
@property (copy, nonatomic) NSNumber *price;

+ (id)dummyOngoingPurchaseEntryWithTagID:(id)a0;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithEntryID:(id)a0 dictionaryRepresentation:(id)a1;
- (id)initWithEntryID:(id)a0 tagID:(id)a1 purchaseID:(id)a2 productID:(id)a3 bundleID:(id)a4 webAccessOptIn:(BOOL)a5 appAdamID:(id)a6 storeExternalVersion:(id)a7 vendorIdentifier:(id)a8 purchaseInitiatedTime:(id)a9 price:(id)a10;

@end
