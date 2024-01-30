@class PKAccountAdditionalPushTopics, NSString, NSArray, NSURL, NSSet, PKAccountDetails, NSDate, PKCreditAccountDetails;

@interface PKAccount : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *accountBaseURL;
@property (nonatomic) unsigned long long feature;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) PKAccountDetails *details;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long stateReason;
@property (nonatomic) unsigned long long accessLevel;
@property (nonatomic) BOOL blockNotifications;
@property (copy, nonatomic) NSSet *supportedFeatures;
@property (retain, nonatomic) PKAccountAdditionalPushTopics *additionalPushTopics;
@property (nonatomic) BOOL accountStateDirty;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSArray *cloudStoreZoneNames;
@property (readonly, nonatomic) PKCreditAccountDetails *creditDetails;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isContentEqualToAccount:(id)a0;
- (BOOL)supportsExtendedFetch;
- (id)_featureWithIdentifier:(id)a0;
- (id)scheduleRecurringPaymentsFeatureDescriptor;
- (id)viewStatementFeatureDescriptor;
- (id)requestStatementFeatureDescriptor;
- (id)exportTransactionDataFeatureDescriptor;
- (id)requestPhysicalCardFeatureDescriptor;
- (id)redeemRewardsFeatureDescriptor;
- (id)showNotificationsFeatureDescriptor;
- (id)showAccountSummaryFeatureDescriptor;
- (id)addFundingSourceFeatureDescriptor;
- (id)showVirtualCardFeatureDescriptor;
- (id)initWithDictionary:(id)a0;
- (id)provisioningAllowedFeatureDescriptor;
- (BOOL)supportsSchedulePayment;
- (BOOL)supportsScheduleRecurringPayments;
- (BOOL)supportsViewStatement;
- (BOOL)supportsRequestStatement;
- (BOOL)supportsExportTransactionData;
- (BOOL)supportsRequestPhysicalCard;
- (BOOL)supportsRedeemRewards;
- (BOOL)supportsShowNotifications;
- (BOOL)supportsShowAccountSummary;
- (BOOL)supportsAddFundingSource;
- (BOOL)supportsShowVirtualCard;
- (BOOL)provisioningAllowed;
- (id)schedulePaymentFeatureDescriptor;
- (id)associatedPassUniqueID;
- (void)encodeWithCoder:(id)a0;

@end
