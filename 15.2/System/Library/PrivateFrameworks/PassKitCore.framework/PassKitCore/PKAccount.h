@class PKAccountAdditionalPushTopics, NSString, NSURL, NSDate, NSSet, PKAccountDetails, NSArray, PKCreditAccountDetails, PKAccountFetchPeriods;

@interface PKAccount : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *accountBaseURL;
@property (retain, nonatomic) NSURL *applyServiceURL;
@property (nonatomic) unsigned long long feature;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) PKAccountDetails *details;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long stateReason;
@property (nonatomic) unsigned long long accessLevel;
@property (nonatomic) BOOL blockNotifications;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic, getter=isCoOwner) BOOL coOwner;
@property (nonatomic, getter=isSharedAccount) BOOL sharedAccount;
@property (copy, nonatomic) NSSet *previousAccountIdentifiers;
@property (copy, nonatomic) NSSet *supportedFeatures;
@property (retain, nonatomic) PKAccountAdditionalPushTopics *additionalPushTopics;
@property (retain, nonatomic) PKAccountFetchPeriods *fetchPeriods;
@property (nonatomic) BOOL accountStateDirty;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSArray *cloudStoreZoneNames;
@property (readonly, nonatomic) NSSet *allAccountIdentifiers;
@property (readonly, nonatomic) PKCreditAccountDetails *creditDetails;

+ (id)analyticsAccountTypeForAccount:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)associatedPassUniqueID;
- (id)schedulePaymentFeatureDescriptor;
- (id)analyticsEventAccountType;
- (BOOL)isContentEqualToAccount:(id)a0;
- (BOOL)supportsExtendedFetch;
- (id)_featureWithIdentifier:(id)a0;
- (id)scheduleRecurringPaymentsFeatureDescriptor;
- (id)viewStatementFeatureDescriptor;
- (id)requestStatementFeatureDescriptor;
- (id)exportTransactionDataFeatureDescriptor;
- (id)redeemRewardsFeatureDescriptor;
- (id)requestPhysicalCardFeatureDescriptor;
- (id)showNotificationsFeatureDescriptor;
- (id)showAccountSummaryFeatureDescriptor;
- (id)addFundingSourceFeatureDescriptor;
- (id)showVirtualCardFeatureDescriptor;
- (unsigned long long)hash;
- (id)dynamicSecurityCodesFeatureDescriptor;
- (id)provisioningAllowedFeatureDescriptor;
- (id)accountUserInvitationAllowedFeatureDescriptor;
- (id)physicalCardActivationFeatureDescriptor;
- (id)showBillPaymentInterestFeatureDescriptor;
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
- (BOOL)supportsDynamicSecurityCodes;
- (BOOL)accountUserInvitationAllowed;
- (BOOL)supportsPhysicalCardActivation;
- (BOOL)showBillPaymentInterest;

@end
