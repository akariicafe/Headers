@class NSDate, NSString, NSURL, NSArray, NSSet, PKEnteredValueActionItem, NSDictionary, PKTransitCommutePlan;

@interface PKPaymentPassAction : NSObject <NSSecureCoding> {
    NSDictionary *_rawDictionary;
    NSDictionary *_localizations;
    NSString *_title;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *vehicleFunctionActions;
@property (readonly, nonatomic) NSURL *externalURL;
@property (copy, nonatomic) NSString *associatedPlanIdentifier;
@property (copy, nonatomic) PKTransitCommutePlan *associatedPlan;
@property (copy, nonatomic) NSString *associatedEnteredValueIdentifier;
@property (readonly, copy, nonatomic) NSString *headerText;
@property (readonly, copy, nonatomic) NSString *footerText;
@property (readonly, copy, nonatomic) NSArray *selectedActionItems;
@property (readonly, nonatomic) PKEnteredValueActionItem *enteredValueItem;
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
@property (readonly, nonatomic) double availableFromOffsetFromUTC;
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

- (id)initWithDictionary:(id)a0 bundle:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)_processLocalizableStrings:(id /* block */)a0;
- (id)_localizableKeys;
- (id)actionUpdatedWithDictionary:(id)a0;

@end
