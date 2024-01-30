@class NSNumber, NSSet, NSString;

@interface EDAMSubscriptionInfo : FATObject

@property (retain, nonatomic) NSNumber *currentTime;
@property (retain, nonatomic) NSNumber *currentlySubscribed;
@property (retain, nonatomic) NSNumber *subscriptionRecurring;
@property (retain, nonatomic) NSNumber *subscriptionExpirationDate;
@property (retain, nonatomic) NSNumber *subscriptionPending;
@property (retain, nonatomic) NSNumber *subscriptionCancellationPending;
@property (retain, nonatomic) NSSet *serviceLevelsEligibleForPurchase;
@property (retain, nonatomic) NSString *currentSku;
@property (retain, nonatomic) NSNumber *validUntil;
@property (retain, nonatomic) NSNumber *itunesReceiptRequested;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
