@class NSString, NSArray, NSDictionary, NSDate, NSNumber;

@interface NDOWarranty : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL covered;
@property (retain) NSDate *coverageEndDate;
@property (retain) NSDate *coverageValidityDate;
@property (retain) NSString *localizedCoveredDeviceDateLabelFormat;
@property (retain) NSString *coverageLocalizedLabel;
@property (retain) NSString *coverageLocalizedDesc;
@property (retain) NSString *coverageLocalizedDescLong;
@property (retain) NSString *coverageLocalizedExpirationLabel;
@property (retain) NSString *footer1FormatString;
@property (retain) NSString *footer1LinkLabel;
@property (retain) NSString *footer1LinkURL;
@property (retain) NSString *footer2FormatString;
@property (retain) NSString *footer2LinkLabel;
@property (retain) NSString *footer2LinkURL;
@property BOOL acOfferEligible;
@property (retain) NSDate *acOfferEligibleUntil;
@property (retain) NSDate *acOfferFollowupDisplayDate;
@property (retain) NSDate *acOfferDisplayDate;
@property (retain) NSString *acOfferIdentifier;
@property (retain) NSString *acLocalizedOfferLabel;
@property (retain) NSString *acLocalizedOfferPluralDescFormat;
@property (retain) NSString *acLocalizedOfferSingularDesc;
@property (retain) NSString *acLocalizedOfferCTA;
@property (retain) NSString *acLocalizedOfferDetails;
@property (retain) NSString *acLocalizedOfferDetailsPluralEligibilityFormat;
@property (retain) NSString *acLocalizedOfferDetailsSingularEligibility;
@property BOOL acOfferDisplay;
@property BOOL acOfferSettingsAppBadge;
@property BOOL acOfferSettingsRowBadge;
@property double acOfferDurationBeforeEndDate;
@property (retain) NSArray *acOfferToggle;
@property double acOfferBadgeDurationBeforeEndDate;
@property BOOL coverageHasACLogo;
@property (retain) NSString *localizedCoverageSubTitleForServicesPartnerString;
@property (retain) NSString *localizedCoverageFooterFormatString;
@property (retain) NSString *localizedCoverageFooterLinkLabel;
@property (retain) NSString *localizedSupportAppLabel;
@property BOOL isCoveragePlanSubscriptionType;
@property (retain) NSString *localizedManagePlanLabel;
@property (retain) NSNumber *acOfferBadgeDaysBeforeEndDate;
@property BOOL isACServicesPartner;
@property (retain) NSDictionary *coverageDetailsDictionary;
@property (retain) NSString *localizedCoverageDetailsTitle;
@property (retain) NSArray *coverageDetailsArray;
@property (retain) NSString *localizedCoverageDetailsLabel;
@property (retain) NSString *localizedCoverageDetailsValue;
@property (retain) NSDictionary *coverageBenefitsDictionary;
@property (retain) NSString *localizedBenefitsCardTitle;
@property (retain) NSString *localizedBenefitsCardSubTitle;
@property (retain) NSArray *benefitDetailsArray;
@property (retain) NSString *localizedBenefitLabelKey;
@property (retain) NSString *localizedBenefitValueKey;
@property (retain) NSString *localizedBenefitsCardFooter;
@property BOOL displayRepairAndSupport;
@property (retain) NSString *agsURL;
@property (retain) NSString *supportAppURL;
@property (retain) NSDictionary *dictionaryRepresentation;
@property (retain) NSString *serialNumber;
@property (readonly) NSString *acLocalizedOfferDesc;
@property (readonly) NSString *acLocalizedOfferDetailsEligibility;
@property (readonly) unsigned int daysEligible;

+ (id)warrantyWithDictionary:(id)a0 serialNumber:(id)a1;
+ (id)_legacyWarrantyPath;
+ (id)warrantyWithDictionary:(id)a0;
+ (id)_warrantyPathForSerialNumberFormat;
+ (id)migrateLegacyCachedWarrantyIfNeededForSerialNumber:(id)a0;
+ (id)cachedWarrantyForSerialNumber:(id)a0;

- (void)cache;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 serialNumber:(id)a1;
- (void)cacheWarranty:(id)a0;
- (id)_dateWithEpochNumber:(id)a0;

@end
