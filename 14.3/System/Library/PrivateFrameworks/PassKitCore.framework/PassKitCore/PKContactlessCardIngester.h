@class PKPaymentProvisioningMethodMetadata, NSString, NSNumberFormatter, NSObject;
@protocol OS_dispatch_queue, PKContactlessCardIngesterDelegate;

@interface PKContactlessCardIngester : NSObject <NFRemoteAdminEventListener> {
    BOOL _listening;
    NSString *_pushTopic;
    PKPaymentProvisioningMethodMetadata *_readerModeProvisioningMetadata;
    NSNumberFormatter *_currencyNumberFormatter;
    id<PKContactlessCardIngesterDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_contactlessCardIngesterQueue;
    id /* block */ _cardSessionTokenCompletionHandler;
    id /* block */ _disableCardCompletionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupported;
+ (id)debugDescriptionForStatus:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)readerModeCardSessionToken:(id)a0;
- (void)readerModeCardIngestionStatus:(unsigned long long)a0;
- (void)_cancelCardIngestion;
- (void)_stopListeningToRemoteAdminEvents;
- (void)_startListeningToRemoteAdminEventsIfRequired;
- (void)_ingestCardWithCompletion:(id /* block */)a0;
- (void)_ingestCardWithCardSessionToken:(id)a0 completion:(id /* block */)a1;
- (id)_displayableErrorForSPStatusCode:(unsigned long long)a0 seldError:(id)a1;
- (id)initWithPaymentSetupProduct:(id)a0 delegate:(id)a1;
- (void)ingestCardWithSuccessHandler:(id /* block */)a0;
- (void)ingestCardWithCardSessionToken:(id)a0 successHandler:(id /* block */)a1;
- (void)invalidate;

@end
