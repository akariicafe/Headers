@class NSString, PKODIServiceProviderAssessment, PKSecureElement, PKDeviceScorer;

@interface PKPeerPaymentDeviceScoreEncryptedPayloadManager : NSObject {
    BOOL _isScoringInProgress;
    unsigned long long _pendingDeviceScoreEncryptedPayloadVersion;
    PKDeviceScorer *_deviceScorer;
    PKODIServiceProviderAssessment *_odiServiceProviderAssessment;
    PKSecureElement *_secureElement;
    NSString *_endpointIdentifier;
    NSString *_recipientAddress;
    unsigned long long _quoteDestinationType;
}

@property (nonatomic) unsigned long long deviceScoreEncryptedPayloadVersion;

+ (id)keyForDeviceScoreEncryptedPayloadVersion:(unsigned long long)a0 endpointIdentifier:(id)a1 recipientAddress:(id)a2;

- (void).cxx_destruct;
- (id)_createContextForDeviceScorer;
- (void)_cristalV1DeviceScoreWithKey:(id)a0 completion:(id /* block */)a1;
- (id)_errorForUnavailableDeviceScoreWithUnderlyingError:(id)a0;
- (id)_serviceProviderIdentifierForEndpointIdentifer;
- (void)_setupDeviceScoreService;
- (unsigned long long)_transactionTypeForEndpointIdentifier;
- (void)deviceScoreWithCompletion:(id /* block */)a0;
- (id)initWithEndpointIdentifier:(id)a0 recipientAddress:(id)a1 deviceScoreEncryptedPayloadVersion:(unsigned long long)a2 quoteDestinationType:(unsigned long long)a3;
- (void)provideSessionFeedbackWithIngested:(BOOL)a0;
- (void)updateAttributesWithEndpointIdentifier:(id)a0 recipientAddress:(id)a1 quoteDestinationType:(unsigned long long)a2;

@end
