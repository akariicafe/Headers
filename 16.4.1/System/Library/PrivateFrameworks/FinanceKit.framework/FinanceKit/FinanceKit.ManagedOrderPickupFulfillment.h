@class _TtC10FinanceKit15LocalizedString, NSSet, NSDate, NSString, CNPostalAddress, CLLocation, _TtC10FinanceKit19ManagedOrderBarcode;

@interface FinanceKit.ManagedOrderPickupFulfillment : NSManagedObject

@property (nonatomic, copy) NSSet *lineItemObjects;
@property (nonatomic) short statusValue;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *statusDescription;
@property (nonatomic, retain) CNPostalAddress *address;
@property (nonatomic, retain) _TtC10FinanceKit19ManagedOrderBarcode *barcode;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *notes;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *displayName;
@property (nonatomic, copy) NSDate *pickupDate;
@property (nonatomic, copy) NSString *pickupWindowDurationValue;
@property (nonatomic, copy) NSDate *pickedUpDate;
@property (nonatomic) short positionIndex;
@property (nonatomic, copy) NSString *fulfillmentIdentifier;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
