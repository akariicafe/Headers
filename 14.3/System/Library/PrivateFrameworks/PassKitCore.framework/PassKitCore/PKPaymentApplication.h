@class NSDecimalNumber, NSString, NSArray, PKFelicaPassProperties, PKTransitPassProperties, NSSet;

@interface PKPaymentApplication : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier;
@property (copy, nonatomic, setter=setDPANSuffix:) NSString *dpanSuffix;
@property (copy, nonatomic, setter=setSanitizedDPAN:) NSString *sanitizedDPAN;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *secureElementIdentifier;
@property (nonatomic) long long state;
@property (readonly, nonatomic) NSString *stateAsString;
@property (copy, nonatomic) NSString *suspendedReason;
@property (nonatomic) BOOL supportsContactlessPayment;
@property (nonatomic) BOOL supportsInAppPayment;
@property (nonatomic) BOOL supportsBarcodePayment;
@property (nonatomic) BOOL supportsOptionalAuthentication;
@property (copy, nonatomic) NSArray *supportedExpressModes;
@property (copy, nonatomic) NSArray *automaticSelectionCriteria;
@property (nonatomic) BOOL supportsServiceMode;
@property (copy, nonatomic) NSString *appletCurrencyCode;
@property (nonatomic) BOOL requiresDeferredAuthorization;
@property (nonatomic) long long paymentNetworkIdentifier;
@property (nonatomic) BOOL inAppPINRequired;
@property (copy, nonatomic) NSDecimalNumber *inAppPINRequiredAmount;
@property (copy, nonatomic) NSString *inAppPINRequiredCurrency;
@property (nonatomic) unsigned long long paymentType;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic, getter=isAuxiliary) BOOL auxiliary;
@property (nonatomic) long long contactlessPriority;
@property (nonatomic) long long inAppPriority;
@property (nonatomic) BOOL supportsInstantFundsIn;
@property (copy, nonatomic) NSString *transactionSourceIdentifier;
@property (copy, nonatomic) NSString *appletDataFormat;
@property (copy, nonatomic) PKTransitPassProperties *transitProperties;
@property (copy, nonatomic) PKFelicaPassProperties *felicaProperties;
@property (readonly, nonatomic) BOOL supportsTransit;
@property (readonly, nonatomic) BOOL supportsSuica;
@property (readonly, nonatomic, getter=isParsedTransitApplication) BOOL parsedTransitApplication;
@property (readonly, nonatomic) BOOL generatesLocalTransactions;
@property (readonly, nonatomic) BOOL supportsTransitHistory;
@property (readonly, nonatomic) NSString *stationCodeProvider;
@property (copy, nonatomic) NSArray *supportedTransitNetworkIdentifiers;
@property (copy, nonatomic) NSSet *subcredentials;

+ (id)applicationWithProtobuf:(id)a0;

- (id)protobuf;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asDictionary;
- (BOOL)acceptedForWebPaymentWithSupportedNetworkIdentifiers:(id)a0 merchantCapabilities:(unsigned long long)a1 paymentMode:(long long)a2 webService:(id)a3 paymentApplicationStates:(id)a4;
- (BOOL)supportsWebPaymentMode:(long long)a0 withExclusionList:(id)a1;
- (BOOL)acceptedForNonWebPaymentWithSupportedNetworkIdentifiers:(id)a0 merchantCapabilities:(unsigned long long)a1 paymentMode:(long long)a2;
- (BOOL)supportsExpressMode:(id)a0;
- (BOOL)acceptedForWebPaymentWithSupportedNetworkIdentifiers:(id)a0 merchantCapabilities:(unsigned long long)a1 paymentMode:(long long)a2 webService:(id)a3;
- (BOOL)supportsWebPaymentMode:(long long)a0 withExclusionList:(id)a1 clientOSVersion:(id)a2;
- (id)initWithPaymentApplicationDictionary:(id)a0 auxiliaryApplication:(BOOL)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)acceptedForNonWebPaymentWithSupportedNetworkIdentifiers:(id)a0 merchantCapabilities:(unsigned long long)a1 paymentMode:(long long)a2 paymentApplicationStates:(id)a3;
- (BOOL)isEqual:(id)a0;
- (BOOL)supportsExpress;
- (BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)a0;
- (BOOL)isEqualToPaymentApplication:(id)a0;
- (void)_createAutomaticSelectionCriteriaIfNecessary;
- (BOOL)supportsExpressForAutomaticSelectionCriteriaPassingTest:(id /* block */)a0;
- (BOOL)supportsAutomaticSelectionForTCI:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
