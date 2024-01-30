@class NSString, NSNumber, NSDate;

@interface FCOngoingPurchaseEntry : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *tagID;
@property (copy, nonatomic) NSString *purchaseID;
@property (copy, nonatomic) NSString *productID;
@property (nonatomic) BOOL webAccessOptIn;
@property (copy, nonatomic) NSNumber *appAdamID;
@property (copy, nonatomic) NSNumber *storeExternalVersion;
@property (copy, nonatomic) NSString *vendorIdentifier;
@property (copy, nonatomic) NSDate *purchaseInitiatedTime;
@property (copy, nonatomic) NSNumber *price;

+ (id)dummyOngoingPurchaseEntryWithTagID:(id)a0;

- (void).cxx_destruct;
- (id)initWithEntryID:(id)a0 dictionaryRepresentation:(id)a1;
- (id)initWithEntryID:(id)a0 tagID:(id)a1 purchaseID:(id)a2 productID:(id)a3 webAccessOptIn:(BOOL)a4 appAdamID:(id)a5 storeExternalVersion:(id)a6 vendorIdentifier:(id)a7 purchaseInitiatedTime:(id)a8 price:(id)a9;
- (id)dictionaryRepresentation;

@end
