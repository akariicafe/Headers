@class NSXPCConnection;

@interface ASOctaneServer : NSObject {
    NSXPCConnection *_connectionToService;
}

+ (id)shared;

- (id)resolveIssueForTransactionWithIdentifier:(unsigned long long)a0 forBundleID:(id)a1;
- (id)completePriceConsentRequestWithResponse:(BOOL)a0 transactionIdentifier:(unsigned long long)a1 forBundleID:(id)a2;
- (id)getStorefrontForBundleID:(id)a0;
- (id)generateSKANPostbackSignature:(id)a0;
- (long long)activePort;
- (id)messageOfTypeForBundleID:(id)a0 messageReason:(id)a1;
- (id)clearOverridesForBundleID:(id)a0;
- (id)setIntegerValue:(long long)a0 forIdentifier:(unsigned long long)a1 forBundleID:(id)a2;
- (id)validateSKAdNetworkSignature:(id)a0 withPublicKey:(id)a1 source:(long long)a2 andParameters:(id)a3 forBundleID:(id)a4;
- (long long)getIntegerValueForIdentifier:(unsigned long long)a0 forBundleID:(id)a1;
- (id)getStringValueForIdentifier:(unsigned long long)a0 forBundleID:(id)a1;
- (id)getTransactionDataForBundleID:(id)a0;
- (void)useConfigurationDirectory:(id)a0 forBundleID:(id)a1;
- (id)refundTransactionWithIdentifier:(unsigned long long)a0 forBundleID:(id)a1;
- (void)unregisterForEventWithIdentifier:(id)a0;
- (id)startPriceIncreaseForTransactionID:(unsigned long long)a0 bundleID:(id)a1 needsConsent:(BOOL)a2;
- (id)deleteTransactionWithIdentifier:(unsigned long long)a0 forBundleID:(id)a1;
- (id)cancelTransactionWithIdentifier:(unsigned long long)a0 forBundleID:(id)a1;
- (id)messageForBundleID:(id)a0;
- (id)init;
- (id)registerForEventOfType:(long long)a0 withFilterData:(id)a1;
- (id)changeAutoRenewStatus:(BOOL)a0 transactionID:(unsigned long long)a1 bundleID:(id)a2;
- (id)deleteAllTransactionsForBundleID:(id)a0;
- (id)buyProductWithID:(id)a0 bundleID:(id)a1;
- (id)setStorefront:(id)a0 forBundleID:(id)a1;
- (id)setStringValue:(id)a0 forIdentifier:(unsigned long long)a1 forBundleID:(id)a2;
- (id)completeAskToBuyRequestWithResponse:(BOOL)a0 transactionID:(unsigned long long)a1 forBundleID:(id)a2;
- (id)_synchronousRemoteObjectProxy:(id *)a0;
- (id)expireOrRenewSubscriptionWithIdentifier:(id)a0 expire:(BOOL)a1 forBundleID:(id)a2;
- (void)appRemovedWithBundleID:(id)a0;
- (void).cxx_destruct;

@end
