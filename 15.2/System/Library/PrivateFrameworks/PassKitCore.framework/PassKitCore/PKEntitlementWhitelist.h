@class NSString, NSArray;

@interface PKEntitlementWhitelist : NSObject {
    int _processIdentifier;
}

@property (readonly) BOOL passesAllAccess;
@property (readonly) BOOL passesOverviewAccess;
@property (readonly) BOOL passesAddSilently;
@property (readonly) BOOL passesAddUnsigned;
@property (readonly) BOOL passPresentationSuppression;
@property (readonly) BOOL paymentAllAccess;
@property (readonly) BOOL paymentConfiguration;
@property (readonly) BOOL paymentPresentation;
@property (readonly) BOOL applePayTrustAllAccess;
@property (readonly) BOOL inAppPayments;
@property (readonly) BOOL inAppPaymentsPrivate;
@property (readonly) BOOL webPayments;
@property (readonly) BOOL winterpegPayments;
@property (readonly) BOOL cardOnFilePayments;
@property (readonly) BOOL AMPCardEnrollment;
@property (readonly) BOOL externalizedContextPayments;
@property (readonly) BOOL trustedDeviceEnrollmentInfo;
@property (readonly) BOOL peerPaymentAllAccess;
@property (readonly) BOOL featuresAllAccess;
@property (readonly) BOOL supportsDisbursements;
@property (readonly) BOOL searchAllAccess;
@property (readonly) BOOL secureElementPassProvisioning;
@property (readonly) BOOL carKeyPassThroughAccess;
@property (readonly) BOOL accessPassProvisioning;
@property (readonly) BOOL credentialStateAccess;
@property (readonly) BOOL shareableCredentialProvisioning;
@property (readonly, copy) NSString *applicationID;
@property (readonly, copy) NSString *developerTeamID;
@property (readonly, copy) NSArray *merchantIdentifiers;
@property (readonly, copy) NSArray *teamIDs;
@property (readonly, copy) NSArray *passTypeIDs;
@property (readonly, copy) NSArray *passTypeIDPrefixes;
@property (readonly) BOOL supportsWebPayments;
@property (readonly) BOOL allAccess;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEntitledForMerchantSession:(id)a0;
- (BOOL)_boolValueOfEntitlement:(id)a0 fromSecTask:(struct __SecTask { } *)a1;
- (BOOL)isEntitledForPassTypeID:(id)a0;
- (BOOL)isEntitledForAnyFromUniquePassTypeIDs:(id)a0;
- (id)initWithConnection:(id)a0;
- (id)_stringValueOfEntitlement:(id)a0 fromSecTask:(struct __SecTask { } *)a1;
- (void).cxx_destruct;
- (BOOL)_probeEntitlementsWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void *)_copyValueOfEntitlement:(id)a0 fromSecTask:(struct __SecTask { } *)a1;
- (id)_arrayValueOfEntitlement:(id)a0 fromSecTask:(struct __SecTask { } *)a1;
- (BOOL)isEntitledForPaymentRequest:(id)a0;

@end
