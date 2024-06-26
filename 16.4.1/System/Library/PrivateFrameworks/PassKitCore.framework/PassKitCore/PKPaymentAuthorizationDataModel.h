@class NSDecimalNumber, PKPayLaterProductAssessmentCollection, PKContactFormatValidator, PKPaymentOrderDetails, PKPaymentOptionsDefaults, PKCurrencyAmount, PKPaymentApplication, NSString, PKPayLaterFinancingController, NSMutableArray, PKPaymentPass, NSArray, NSMutableDictionary, PKPeerPaymentQuote, PKBankAccountInformation, PKPaymentRequest, PKPeerPaymentService, PKAccountEnhancedMerchant, NSSet, PKDisbursementApplicationInformation, PKPeerPaymentAccount, PKPayment, PKRemoteDevice, PKPaymentOptionsRecents, CNContact, PKPaymentWebService, PKPaymentInstructions, PKPassLibrary, PKPaymentSummaryItem, PKPayLaterFinancingOption, NSMapTable, PKRemotePaymentInstrument, PKShippingMethod;

@interface PKPaymentAuthorizationDataModel : NSObject <PKPaymentValidating> {
    NSMutableArray *_items;
    NSMutableDictionary *_typeToItemMap;
    NSMutableDictionary *_billingAddressForFundingSource;
    unsigned long long _holdPendingUpdatesCount;
    BOOL _ignoreProximity;
    NSArray *_acceptedPasses;
    NSArray *_unavailablePasses;
    NSMapTable *_instrumentToDeviceMap;
    NSMutableDictionary *_remoteDeviceToAcceptedInstruments;
    NSMutableDictionary *_statusForPass;
    NSMutableDictionary *_acceptedApplications;
    PKAccountEnhancedMerchant *_appleCardEnhancedMerchant;
    NSString *_paymentApplicationIdentifierForErrors;
    NSArray *_clientErrors;
}

@property (retain, nonatomic) CNContact *cachedRecentAddress;
@property (retain, nonatomic) CNContact *originalShippingAddress;
@property (readonly, nonatomic) NSString *defaultPaymentPassUniqueIdentifier;
@property (readonly, nonatomic) long long mode;
@property (nonatomic) long long fundingMode;
@property (retain, nonatomic) PKPaymentRequest *paymentRequest;
@property (retain, nonatomic) NSArray *paymentContentItems;
@property (retain, nonatomic) NSString *hostAppLocalizedName;
@property (retain, nonatomic) NSString *hostApplicationIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *relevantPassUniqueID;
@property (retain, nonatomic) NSString *teamIdentifier;
@property (retain, nonatomic) NSString *billingAgreement;
@property (retain, nonatomic) NSString *couponCode;
@property (nonatomic) unsigned long long numberOfOutstandingCouponCodeUpdates;
@property (retain, nonatomic) CNContact *shippingEmail;
@property (retain, nonatomic) CNContact *shippingPhone;
@property (retain, nonatomic) CNContact *shippingName;
@property (retain, nonatomic) CNContact *shippingAddress;
@property (retain, nonatomic) PKShippingMethod *shippingMethod;
@property (retain, nonatomic) NSString *shippingType;
@property (nonatomic, getter=isShippingEditable) BOOL shippingEditable;
@property (retain, nonatomic) NSString *shippingEditableMessage;
@property (retain, nonatomic) CNContact *billingAddress;
@property (retain, nonatomic) NSArray *paymentSummaryItems;
@property (retain, nonatomic) NSArray *paymentErrors;
@property (retain, nonatomic) PKPayment *payment;
@property (readonly, nonatomic) NSArray *paymentContactFormatErrors;
@property (readonly, nonatomic) NSArray *allErrors;
@property (retain, nonatomic) PKContactFormatValidator *contactFormatValidator;
@property (retain, nonatomic) PKPaymentOptionsDefaults *defaults;
@property (retain, nonatomic) PKPaymentOptionsRecents *recents;
@property (retain, nonatomic) PKPassLibrary *library;
@property (retain, nonatomic) PKPaymentWebService *paymentWebService;
@property (retain, nonatomic) PKPeerPaymentService *peerPaymentService;
@property (retain, nonatomic) PKPaymentPass *peerPaymentPass;
@property (readonly, nonatomic) PKPaymentPass *appleCardPass;
@property (retain, nonatomic) NSArray *pendingTransactions;
@property (retain, nonatomic) PKPaymentOrderDetails *pendingOrderDetails;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (readonly, nonatomic) NSString *merchantName;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSDecimalNumber *transactionAmount;
@property (readonly, nonatomic) PKPaymentSummaryItem *totalSummaryItem;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) BOOL pinRequired;
@property (retain, nonatomic) PKRemoteDevice *remoteDevice;
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (retain, nonatomic) PKPeerPaymentQuote *peerPaymentQuote;
@property (retain, nonatomic) PKDisbursementApplicationInformation *disbursementApplicationInformation;
@property (nonatomic) BOOL supportsPreservePeerPaymentBalance;
@property (nonatomic) BOOL usePeerPaymentBalance;
@property (retain, nonatomic) PKBankAccountInformation *bankAccount;
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentBalanceForAccountPayment;
@property (copy, nonatomic) NSString *installmentBindToken;
@property (copy, nonatomic) NSString *installmentGroupIdentifier;
@property (retain, nonatomic) NSDecimalNumber *installmentAuthorizationAmount;
@property (retain, nonatomic) PKPaymentApplication *paymentApplication;
@property (retain, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) NSArray *acceptedPasses;
@property (readonly, nonatomic) NSArray *unavailablePasses;
@property (nonatomic) BOOL canAddPasses;
@property (nonatomic) BOOL supportsEmptyPass;
@property (readonly, nonatomic) BOOL wantsInstructions;
@property (retain, nonatomic) PKPaymentInstructions *instructions;
@property (readonly, nonatomic) NSArray *remoteDevices;
@property (readonly, nonatomic) NSArray *allRemoteDevices;
@property (readonly, nonatomic) NSArray *allNearbyRemoteDevices;
@property (retain, nonatomic) PKRemotePaymentInstrument *remotePaymentInstrument;
@property (retain, nonatomic) PKRemotePaymentInstrument *initialRemotePaymentInstrument;
@property (readonly, nonatomic) NSSet *allAcceptedRemotePaymentInstruments;
@property (readonly, nonatomic) NSSet *allUnavailableRemotePaymentInstruments;
@property (retain, nonatomic) PKPayLaterFinancingOption *selectedFinancingOption;
@property (retain, nonatomic) PKPayLaterFinancingOption *previouslySelectedFinancingOption;
@property (retain, nonatomic) PKPayLaterProductAssessmentCollection *assessmentCollection;
@property (retain, nonatomic) PKPayLaterFinancingController *financingController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isValidWithError:(id *)a0;
- (id)initWithMode:(long long)a0;
- (long long)requestedMode;
- (id)init;
- (void)endUpdates;
- (void).cxx_destruct;
- (void)beginUpdates;
- (id)_inAppPrivateLabelPaymentPasses;
- (long long)_statusForPass:(id)a0;
- (id)_billingAddressKey;
- (id)_defaultSelectedPaymentApplicationForPaymentApplications:(id)a0;
- (void)_didSetItemForClass:(Class)a0;
- (long long)_displayOrderForDataType:(long long)a0;
- (void)_ensureItemForClass:(Class)a0;
- (void)_ensureItems;
- (void)_ensurePaymentContentItems;
- (void)_ensurePlaceholderItems;
- (id)_filterAndProcessPaymentApplicationsUsingConfiguration:(id)a0 withPrimaryPaymentApplication:(id)a1 passHasAssociatedPeerPaymentAccount:(BOOL)a2;
- (id)_filterAndProcessPaymentPassesUsingConfiguration:(id)a0;
- (id)_formatAddressContactIfNecessary:(id)a0;
- (id)_inAppPaymentPassesForPaymentRequest:(id)a0;
- (unsigned long long)_insertionIndexForItem:(id)a0;
- (void)_notifyModelChanged;
- (void)_populatePeerPaymentBalanceIfNecessaryForPasses:(id)a0;
- (void)_removeDataItem:(id)a0;
- (void)_setDataItem:(id)a0;
- (void)_setPaymentContentDataItems:(id)a0;
- (void)_setStatus:(long long)a0 forPass:(id)a1;
- (void)_updatePeerPaymentPromotionAvailability;
- (id)acceptedPaymentApplicationsForPass:(id)a0;
- (id)acceptedPaymentApplicationsForRemoteInstrument:(id)a0;
- (id)acceptedRemotePaymentInstrumentsForRemoteDevice:(id)a0;
- (id)automaticallyPresentedPassFromAcceptedPasses:(id)a0;
- (id)defaultSelectedPaymentApplicationForPass:(id)a0;
- (id)defaultSelectedPaymentApplicationForRemoteInstrument:(id)a0;
- (id)enhancedMerchantInfoForPass:(id)a0;
- (void)fallbackToBypassMode;
- (BOOL)isValidWithError:(id *)a0 errorStatus:(long long *)a1;
- (id)itemForType:(long long)a0;
- (id)paymentErrorsFromLegacyStatus:(long long)a0;
- (id)paymentRequestSupportedQuery;
- (id)paymentRequestSupportedRemoteQuery;
- (void)refreshBillingAddressErrors;
- (void)refreshPaymentMethods;
- (void)refreshPaymentMethodsAndNotifyFinancingController:(BOOL)a0;
- (void)setAutomaticReloadPaymentRequest:(id)a0;
- (void)setCouponCodeErrors:(id)a0;
- (void)setDeferredPaymentRequest:(id)a0;
- (void)setEnhancedMerchantInfo:(id)a0 forPass:(id)a1;
- (void)setMultiTokenContexts:(id)a0;
- (void)setPass:(id)a0 withSelectedPaymentApplication:(id)a1;
- (void)setPaymentDateForPaymentRequest:(id)a0;
- (void)setPaymentPassWithPassTypeIdentifier:(id)a0 serialNumber:(id)a1;
- (void)setRecurringPaymentRequest:(id)a0;
- (void)setRemotePaymentInstrument:(id)a0 withSelectedPaymentApplication:(id)a1;
- (void)setShippingAddressErrors:(id)a0;
- (void)setStatus:(long long)a0 forItemWithType:(long long)a1;
- (void)setStatus:(long long)a0 forItemWithType:(long long)a1 notify:(BOOL)a2;
- (BOOL)shouldShowPeerPaymentBalanceToggle;
- (BOOL)shouldUpdateContactDataItem;
- (void)showPeerPaymentCardDataItem:(BOOL)a0 withCardDataItem:(BOOL)a1;
- (id)unavailablePaymentApplicationsForPass:(id)a0;
- (id)unavailablePaymentApplicationsForRemoteInstrument:(id)a0;
- (void)updateBillingErrors;
- (void)updatePeerPaymentPromotionForPeerPaymentQuote:(BOOL)a0;
- (void)updateRemoteDevices:(id)a0;
- (void)updateRemoteDevices:(id)a0 ignoreProximity:(BOOL)a1;

@end
