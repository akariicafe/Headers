@class NSURL, PKPaymentInstallmentConfiguration, PKPaymentMerchantSession, NSDate, AKAppleIDAuthenticationContext, PKContact, NSTimeZone, NSString, PKPaymentTokenConfiguration, NSSet, PKApplePayTrustSignatureRequest, NSArray, NSData, PKRecurringPaymentRequest;

@interface PKPaymentRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *thumbnailURLs;
@property (retain, nonatomic) NSURL *originatingURL;
@property (nonatomic) BOOL expectsMerchantSession;
@property (retain, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (retain, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (retain, nonatomic) NSString *CTDataConnectionServiceType;
@property (copy, nonatomic) NSString *boundInterfaceIdentifier;
@property (retain, nonatomic) PKApplePayTrustSignatureRequest *applePayTrustSignatureRequest;
@property (retain, nonatomic) NSArray *bankAccounts;
@property (nonatomic) BOOL accountPaymentSupportsPeerPayment;
@property (nonatomic) BOOL accountPaymentUsePeerPaymentBalance;
@property (nonatomic) BOOL deviceSupportsPeerPaymentAccountPayment;
@property (nonatomic) long long paymentFrequency;
@property (copy, nonatomic) NSDate *paymentDate;
@property (copy, nonatomic) NSTimeZone *paymentTimeZone;
@property (readonly) BOOL _isPSD2StyleRequest;
@property (readonly) BOOL _isAMPPayment;
@property (readonly, nonatomic, getter=isMultiTokenRequest) BOOL multiTokenRequest;
@property (readonly) BOOL shouldUseMerchantSession;
@property (nonatomic) unsigned long long APIType;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic) unsigned long long requestor;
@property (copy, nonatomic) NSArray *paymentContentItems;
@property (nonatomic) BOOL suppressTotal;
@property (nonatomic, getter=isPaymentSummaryPinned) BOOL paymentSummaryPinned;
@property (copy, nonatomic) NSString *localizedSummaryItemsTitle;
@property (retain, nonatomic) AKAppleIDAuthenticationContext *appleIDAuthenticationContext;
@property (copy, nonatomic) NSString *localizedNavigationTitle;
@property (nonatomic) unsigned long long confirmationStyle;
@property (copy, nonatomic) NSString *localizedConfirmationTitle;
@property (copy, nonatomic) NSString *localizedBiometricConfirmationTitle;
@property (copy, nonatomic) NSString *localizedPasswordButtonTitle;
@property (copy, nonatomic) NSString *localizedAuthorizingTitle;
@property (copy, nonatomic) NSString *localizedErrorMessage;
@property (copy, nonatomic) NSString *localizedCallbackErrorTitle;
@property (copy, nonatomic) NSString *localizedCallbackErrorMessage;
@property (nonatomic, getter=isShippingEditable) BOOL shippingEditable;
@property (copy, nonatomic) NSString *shippingEditableMessage;
@property (nonatomic) BOOL requiresAddressPrecision;
@property (retain, nonatomic) PKPaymentMerchantSession *merchantSession;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (copy, nonatomic) NSString *passSerialNumber;
@property (nonatomic) double clientCallbackTimeout;
@property (nonatomic) BOOL supportsInstantFundsIn;
@property (retain, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration;
@property (retain, nonatomic) PKPaymentTokenConfiguration *tokenConfiguration;
@property (retain, nonatomic) NSArray *multiTokenContexts;
@property (retain, nonatomic) PKRecurringPaymentRequest *recurringPaymentRequest;
@property (copy, nonatomic) NSString *billingAgreement;
@property (copy, nonatomic) NSData *externalizedContext;
@property (nonatomic) struct __SecAccessControl { } *accesssControlRef;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSArray *supportedNetworks;
@property (nonatomic) unsigned long long merchantCapabilities;
@property (nonatomic) BOOL supportsCouponCode;
@property (copy, nonatomic) NSString *couponCode;
@property (copy, nonatomic) NSArray *paymentSummaryItems;
@property (copy, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSSet *requiredBillingContactFields;
@property (nonatomic) unsigned long long requiredBillingAddressFields;
@property (retain, nonatomic) PKContact *billingContact;
@property (retain, nonatomic) NSSet *requiredShippingContactFields;
@property (nonatomic) unsigned long long requiredShippingAddressFields;
@property (retain, nonatomic) PKContact *shippingContact;
@property (copy, nonatomic) NSArray *shippingMethods;
@property (nonatomic) unsigned long long shippingType;
@property (nonatomic) unsigned long long shippingContactEditingMode;
@property (copy, nonatomic) NSData *applicationData;
@property (copy, nonatomic) NSSet *supportedCountries;
@property (nonatomic) const void *shippingAddress;
@property (nonatomic) const void *billingAddress;

+ (id)paymentContactInvalidErrorWithContactField:(id)a0 localizedDescription:(id)a1;
+ (id)paymentBillingAddressInvalidErrorWithKey:(id)a0 localizedDescription:(id)a1;
+ (id)errorFromDictionary:(id)a0;
+ (id)delegatePurchaseRequestWithProtobuf:(id)a0;
+ (id)paymentCouponCodeInvalidErrorWithLocalizedDescription:(id)a0;
+ (id)paymentCouponCodeExpiredErrorWithLocalizedDescription:(id)a0;
+ (long long)version;
+ (id)paymentShippingAddressInvalidErrorWithKey:(id)a0 localizedDescription:(id)a1;
+ (id)paymentShippingAddressUnserviceableErrorWithLocalizedDescription:(id)a0;
+ (id)requestWithProtobuf:(id)a0;
+ (id)availableNetworks;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)protobuf;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_shouldUseOsloTNG;
- (BOOL)isEqualToPaymentRequest:(id)a0;
- (id)_addressFieldsToContactFields:(unsigned long long)a0;
- (unsigned long long)_contactFieldsToAddressFields:(id)a0;
- (BOOL)_shouldUseAmpEnrollmentPinning;
- (id)delegatePurchaseProtobuf;
- (id)description;
- (id)_transactionAmount;
- (BOOL)isDisbursementPaymentRequest;
- (BOOL)isServiceProviderPaymentRequest;
- (id)serviceProviderPaymentRequest;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isPeerPaymentRequest;
- (id)disbursementPaymentRequest;
- (id)init;
- (id)peerPaymentRequest;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
