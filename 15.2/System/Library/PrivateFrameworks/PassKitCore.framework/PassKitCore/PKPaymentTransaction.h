@class NSDecimalNumber, NSDictionary, PKAccountEvent, PKCreditInstallmentPlan, PKMerchant, NSOrderedSet, PKPaymentTransactionFees, PKCurrencyAmount, NSString, PKTransactionAuthenticationContext, NSArray, PKPaymentTransactionRewards, PKCreditInstallmentPlanPayment, PKPaymentTransactionForeignExchangeInformation, NSSet, NSData, CLLocation, NSUUID, PKTransactionReleasedData, NSDate, NSTimeZone, NSURL, NSNumber;

@interface PKPaymentTransaction : NSObject <NSSecureCoding, PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) NSString *paymentHash;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSDecimalNumber *subtotalAmount;
@property (readonly, nonatomic) PKCurrencyAmount *subtotalCurrencyAmount;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSArray *amounts;
@property (copy, nonatomic) NSArray *plans;
@property (readonly, nonatomic) NSString *formattedBalanceAdjustmentAmount;
@property (readonly, nonatomic) NSString *formattedBalanceAdjustmentAbsoluteAmount;
@property (readonly, nonatomic) NSString *formattedBalanceAdjustmentSubtotalAmount;
@property (copy, nonatomic) NSDate *transactionDate;
@property (copy, nonatomic) NSDate *transactionStatusChangedDate;
@property (copy, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) PKMerchant *merchant;
@property (retain, nonatomic) NSString *locality;
@property (retain, nonatomic) NSString *administrativeArea;
@property (readonly, weak, nonatomic) NSString *displayLocation;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSDate *locationDate;
@property (nonatomic) double locationLatitude;
@property (nonatomic) double locationLongitude;
@property (nonatomic) double locationAltitude;
@property (nonatomic) double locationHorizontalAccuracy;
@property (nonatomic) double locationVerticalAccuracy;
@property (nonatomic, getter=isCoarseLocation) BOOL coarseLocation;
@property (readonly, nonatomic) CLLocation *preferredLocation;
@property (nonatomic) long long transitType;
@property (nonatomic) unsigned long long transitModifiers;
@property (nonatomic) BOOL enRoute;
@property (copy, nonatomic) NSString *stationCodeProvider;
@property (copy, nonatomic) NSNumber *cityCode;
@property (copy, nonatomic) NSData *startStationCode;
@property (copy, nonatomic) NSString *startStation;
@property (retain, nonatomic) CLLocation *startStationLocation;
@property (nonatomic) double startStationLatitude;
@property (nonatomic) double startStationLongitude;
@property (copy, nonatomic) NSData *endStationCode;
@property (copy, nonatomic) NSString *endStation;
@property (retain, nonatomic) CLLocation *endStationLocation;
@property (nonatomic) double endStationLatitude;
@property (nonatomic) double endStationLongitude;
@property (nonatomic) BOOL shouldSuppressDate;
@property (nonatomic) BOOL suppressNotifications;
@property (nonatomic) long long adjustmentType;
@property (nonatomic) long long adjustmentTypeReason;
@property (nonatomic) long long peerPaymentType;
@property (nonatomic) long long peerPaymentStatus;
@property (nonatomic) long long accountType;
@property (copy, nonatomic) NSString *peerPaymentCounterpartHandle;
@property (copy, nonatomic) NSString *peerPaymentMemo;
@property (copy, nonatomic) NSDate *peerPaymentMessageReceivedDate;
@property (retain, nonatomic) PKPaymentTransactionForeignExchangeInformation *foreignExchangeInformation;
@property (retain, nonatomic) PKPaymentTransactionFees *fees;
@property (copy, nonatomic) NSDecimalNumber *primaryFundingSourceAmount;
@property (copy, nonatomic) NSString *primaryFundingSourceCurrencyCode;
@property (readonly, nonatomic) PKCurrencyAmount *primaryFundingSourceCurrencyAmount;
@property (copy, nonatomic) NSDecimalNumber *secondaryFundingSourceAmount;
@property (copy, nonatomic) NSString *secondaryFundingSourceCurrencyCode;
@property (readonly, nonatomic) PKCurrencyAmount *secondaryFundingSourceCurrencyAmount;
@property (nonatomic) long long secondaryFundingSourceNetwork;
@property (copy, nonatomic) NSString *secondaryFundingSourceDPANSuffix;
@property (copy, nonatomic) NSString *secondaryFundingSourceFPANIdentifier;
@property (copy, nonatomic) NSString *secondaryFundingSourceDescription;
@property (nonatomic) long long secondaryFundingSourceType;
@property (copy, nonatomic) NSUUID *requestDeviceScoreIdentifier;
@property (copy, nonatomic) NSUUID *sendDeviceScoreIdentifier;
@property (nonatomic) BOOL deviceScoreIdentifiersRequired;
@property (nonatomic) BOOL deviceScoreIdentifiersSubmitted;
@property (copy, nonatomic) NSString *merchantProvidedTitle;
@property (copy, nonatomic) NSString *merchantProvidedDescription;
@property (retain, nonatomic) NSDecimalNumber *rewardsTotalAmount;
@property (retain, nonatomic) NSString *rewardsTotalCurrencyCode;
@property (nonatomic) unsigned long long rewardsEligibilityReason;
@property (readonly, nonatomic) PKCurrencyAmount *rewardsTotalCurrencyAmount;
@property (retain, nonatomic) PKPaymentTransactionRewards *rewards;
@property (nonatomic) unsigned long long cardType;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *lifecycleIdentifier;
@property (copy, nonatomic) NSString *authNetworkData;
@property (copy, nonatomic) NSString *clearingNetworkData;
@property (retain, nonatomic) NSString *cardIdentifier;
@property (retain, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier;
@property (retain, nonatomic, setter=setPANIdentifier:) NSString *panIdentifier;
@property (retain, nonatomic) NSString *cardNumberSuffix;
@property (copy, nonatomic) NSString *referenceIdentifier;
@property (nonatomic) unsigned long long suppressBehavior;
@property (nonatomic) long long redemptionType;
@property (retain, nonatomic) NSSet *questions;
@property (readonly, nonatomic) NSSet *answeredQuestionsOnThisDevice;
@property (readonly, nonatomic) NSSet *unansweredQuestions;
@property (readonly, nonatomic) BOOL reviewed;
@property (retain, nonatomic) NSOrderedSet *servicingEvents;
@property (retain, nonatomic) NSArray *payments;
@property (readonly, nonatomic) unsigned long long disputeStatus;
@property (readonly, nonatomic) unsigned long long disputeType;
@property (retain, nonatomic) PKAccountEvent *redemptionEvent;
@property (retain, nonatomic) PKCreditInstallmentPlanPayment *installmentPayment;
@property (retain, nonatomic) PKCreditInstallmentPlan *installmentPlan;
@property (copy, nonatomic) NSDictionary *metadata;
@property (nonatomic) BOOL processedForLocation;
@property (nonatomic) BOOL processedForMerchantCleanup;
@property (nonatomic) BOOL requiresMerchantReprocessing;
@property (retain, nonatomic) NSDate *lastMerchantReprocessingDate;
@property (nonatomic) BOOL processedForStations;
@property (nonatomic) BOOL hasAssociatedPaymentApplication;
@property (nonatomic) BOOL hasNotificationServiceData;
@property (readonly, nonatomic) BOOL hasTransactionSource;
@property (readonly, nonatomic) BOOL hasBackingData;
@property (readonly, nonatomic) BOOL supportsFuzzyMatching;
@property (readonly, nonatomic) BOOL fullyProcessed;
@property (nonatomic) BOOL originatedByDevice;
@property (nonatomic, getter=isFuzzyMatched) BOOL fuzzyMatched;
@property (copy, nonatomic) NSString *receiptProviderIdentifier;
@property (copy, nonatomic) NSString *receiptIdentifier;
@property (retain, nonatomic) NSURL *receiptProviderURL;
@property (readonly, nonatomic) NSString *associatedReceiptUniqueID;
@property (copy, nonatomic) NSString *barcodeIdentifier;
@property (retain, nonatomic) PKTransactionAuthenticationContext *authenticationContext;
@property (copy, nonatomic) NSString *primaryFundingSourceDescription;
@property (copy, nonatomic) NSDecimalNumber *nominalAmount;
@property (readonly, nonatomic) PKCurrencyAmount *nominalCurrencyAmount;
@property (nonatomic) BOOL hasAdditionalOffers;
@property (retain, nonatomic) NSArray *awards;
@property (retain, nonatomic) NSArray *amountModifiers;
@property (copy, nonatomic) NSString *issueReportIdentifier;
@property (nonatomic) long long transactionStatus;
@property (nonatomic) long long transactionType;
@property (nonatomic) long long technologyType;
@property (nonatomic) unsigned long long transactionSource;
@property (nonatomic) long long transactionDeclinedReason;
@property (readonly, nonatomic) BOOL hasEffectiveTransactionSource;
@property (readonly, nonatomic) unsigned long long effectiveTransactionSource;
@property (readonly, nonatomic) unsigned long long updateReasons;
@property (readonly, nonatomic) BOOL updateReasonIsInitialDownload;
@property (copy, nonatomic) NSString *transactionSourceIdentifier;
@property (nonatomic) BOOL isCloudKitArchived;
@property (retain, nonatomic) PKTransactionReleasedData *releasedData;
@property (readonly, nonatomic) BOOL isMerchantTokenTransaction;

+ (id)paymentTransactionFromSource:(unsigned long long)a0;
+ (id)formattedBalanceAdjustmentForAmount:(id)a0 transactionType:(long long)a1 adjustmentType:(long long)a2 peerPaymentType:(long long)a3;
+ (id)paymentTransactionWithSource:(unsigned long long)a0;
+ (id)transactionNotificationStatusStringForTransaction:(id)a0 personContact:(id)a1;
+ (id)paymentTransactionWithSource:(unsigned long long)a0 dictionary:(id)a1 unitDictionary:(id)a2 balanceLabelDictionary:(id)a3 planLabelDictionary:(id)a4 hasNotificationServiceData:(BOOL)a5;
+ (BOOL)updateReasonIsInitialDownload:(unsigned long long)a0;
+ (id)recordNamePrefix;

- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (id)formattedStringForMultipleAmountsForPass:(id)a0;
- (id)transactionAmountsForMultipleAmounts;
- (void)encodeWithCoder:(id)a0;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (id)updateReasonsDescription;
- (id)_transactionSourceString;
- (BOOL)isEqualToPaymentTransaction:(id)a0;
- (void)_encodeDeviceDataWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (id)_preformattedStringForMultipleAmounts;
- (void)_encodeServerDataWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (id)_formatBalanceAdjustmentAmount:(id)a0;
- (id)_transactionTypeString;
- (id)_transitSubtypeString;
- (BOOL)isZeroTransaction;
- (id)_commutePlanInformationForPass:(id)a0;
- (id)_latestDisputeEvent;
- (id)dictionaryOfFormattedMultipleAmountTotalsByRealCurrency;
- (id)_preformattedStringForMultiplePlans;
- (id)formattedAwards;
- (id)formattedTransitTransactionMessageForPass:(id)a0 suppressNoChargeAmount:(BOOL)a1;
- (void)answeredQuestion:(unsigned long long)a0;
- (id)description;
- (unsigned long long)itemType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)primaryIdentifier;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithCloudStoreCoder:(id)a0;
- (void)addUpdateReasons:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)isCloudArchivableDeviceDataEqual:(id)a0;
- (BOOL)hasCloudArchivableDeviceData;
- (id)dictionaryRepresentation;

@end
