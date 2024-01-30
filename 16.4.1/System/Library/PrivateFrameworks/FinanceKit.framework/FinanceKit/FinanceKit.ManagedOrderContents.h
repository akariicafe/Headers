@class _TtC10FinanceKit16ManagedOrderData, NSString, NSArray, NSDate, NSSet, NSURL, _TtC10FinanceKit19ManagedOrderPayment, _TtC10FinanceKit15LocalizedString, _TtC10FinanceKit20ManagedOrderMerchant;

@interface FinanceKit.ManagedOrderContents : NSManagedObject

@property (nonatomic, copy) NSSet *associatedApplicationObjects;
@property (nonatomic, copy) NSArray *associatedApplicationIdentifiers;
@property (nonatomic, retain) NSSet *images;
@property (nonatomic, copy) NSSet *lineItemObjects;
@property (nonatomic, retain) _TtC10FinanceKit20ManagedOrderMerchant *merchant;
@property (nonatomic, retain) _TtC10FinanceKit16ManagedOrderData *orderData;
@property (nonatomic, copy) NSString *orderNumber;
@property (nonatomic) short orderTypeValue;
@property (nonatomic) short changeNotificationsValue;
@property (nonatomic) short statusValue;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *statusDescription;
@property (nonatomic, copy) NSDate *createdDate;
@property (nonatomic, copy) NSDate *updatedDate;
@property (nonatomic, copy) NSURL *orderManagementURL;
@property (nonatomic, retain) _TtC10FinanceKit19ManagedOrderPayment *payment;
@property (nonatomic, copy) NSSet *shippingFulfillmentObjects;
@property (nonatomic, copy) NSSet *pickupFulfillmentObjects;
@property (nonatomic, copy) NSString *customerFamilyName;
@property (nonatomic, copy) NSString *customerGivenName;
@property (nonatomic, copy) NSString *customerOrganizationName;
@property (nonatomic, copy) NSString *customerEmailAddress;
@property (nonatomic, copy) NSString *customerPhoneNumber;
@property (nonatomic) BOOL hasActiveFulfillment;
@property (nonatomic) short schemaVersion;
@property (nonatomic) short internalSchemaVersion;
@property (nonatomic) short statusPriorityValue;
@property (nonatomic, copy) NSDate *priorityEstimatedCompletionDate;

- (void).cxx_construct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
