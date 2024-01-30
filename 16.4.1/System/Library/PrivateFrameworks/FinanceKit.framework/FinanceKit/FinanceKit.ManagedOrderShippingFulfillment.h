@class _TtC10FinanceKit15LocalizedString, NSString, NSSet, NSURL, CNPostalAddress, NSDate;

@interface FinanceKit.ManagedOrderShippingFulfillment : NSManagedObject

@property (nonatomic, copy) NSString *carrier;
@property (nonatomic, copy) NSString *carrierIdentifier;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *notes;
@property (nonatomic) short statusValue;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *statusDescription;
@property (nonatomic, copy) NSString *trackingNumber;
@property (nonatomic, copy) NSURL *trackingURL;
@property (nonatomic, copy) NSString *recipientFamilyName;
@property (nonatomic, copy) NSString *recipientGivenName;
@property (nonatomic, copy) NSString *recipientOrganizationName;
@property (nonatomic, retain) CNPostalAddress *recipientAddress;
@property (nonatomic, copy) NSSet *lineItemObjects;
@property (nonatomic, copy) NSDate *estimatedDeliveryDate;
@property (nonatomic, copy) NSString *estimatedDeliveryWindowDurationValue;
@property (nonatomic, copy) NSDate *deliveryDate;
@property (nonatomic) short positionIndex;
@property (nonatomic, copy) NSString *fulfillmentIdentifier;
@property (nonatomic, copy) NSDate *shippedDate;
@property (nonatomic) short shippingTypeValue;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
