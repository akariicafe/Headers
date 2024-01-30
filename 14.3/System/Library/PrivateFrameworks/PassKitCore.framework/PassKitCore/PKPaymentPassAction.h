@class PKTransitCommutePlan, NSString, NSArray, NSSet, NSDate, PKEnteredValueActionItem, NSDictionary;

@interface PKPaymentPassAction : NSObject <NSSecureCoding> {
    NSDictionary *_rawDictionary;
    NSDictionary *_localizations;
    NSString *_title;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *associatedPlanIdentifier;
@property (copy, nonatomic) PKTransitCommutePlan *associatedPlan;
@property (copy, nonatomic) NSString *associatedEnteredValueIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL hasRemoteContent;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *actionDescription;
@property (readonly, copy, nonatomic) NSString *confirmationTitle;
@property (nonatomic) BOOL reverseButtonTitleForLegacySuica;
@property (readonly, nonatomic) BOOL featured;
@property (readonly, copy, nonatomic) NSString *relevantPropertyIdentifier;
@property (readonly, copy, nonatomic) NSDate *availableFrom;
@property (readonly, copy, nonatomic) NSDate *availableUntil;
@property (readonly, nonatomic) BOOL isActionAvailable;
@property (readonly, copy, nonatomic) NSString *unavailableBeforeReason;
@property (readonly, copy, nonatomic) NSString *unavailableAfterReason;
@property (readonly, copy, nonatomic) NSString *serviceProviderIdentifier;
@property (readonly, copy, nonatomic) NSString *serviceProviderCountryCode;
@property (readonly, copy, nonatomic) NSArray *serviceProviderSupportedNetworks;
@property (readonly, copy, nonatomic) NSArray *serviceProviderAcceptedNetworks;
@property (readonly, copy, nonatomic) NSSet *serviceProviderSupportedCountries;
@property (readonly, nonatomic) unsigned long long serviceProviderCapabilities;
@property (readonly, nonatomic) PKEnteredValueActionItem *enteredValueItem;
@property (readonly, copy, nonatomic) NSString *headerText;
@property (readonly, copy, nonatomic) NSString *footerText;
@property (readonly, copy, nonatomic) NSArray *selectedActionItems;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_localizableKeys;
- (void)_processLocalizableStrings:(id /* block */)a0;
- (id)actionUpdatedWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
