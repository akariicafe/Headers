@class NSString, NSSet, NSData, NSDate;

@interface FinanceKit.ManagedOrderType : NSManagedObject

@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic, copy) NSString *deviceLibraryIdentifier;
@property (nonatomic, copy) NSData *pushToken;
@property (nonatomic) BOOL hasPushToken;
@property (nonatomic) long long requestTokenAttemptCount;
@property (nonatomic, copy) NSDate *lastRequestTokenAttemptDate;
@property (nonatomic) long long updateSequenceNumber;
@property (nonatomic) short updateTokenCount;
@property (nonatomic, copy) NSDate *updateTokenRefillDate;
@property (nonatomic) long long propagateUpdateSequenceNumber;
@property (nonatomic, retain) NSSet *pendingApplePayOrders;
@property (nonatomic, retain) NSSet *orders;
@property (nonatomic, retain) NSSet *orderRegistrations;
@property (nonatomic) long long countOfOrdersWithEffectiveAutomaticUpdatesEnabled;
@property (nonatomic, retain) NSSet *orderWebServices;

- (void)willSave;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
