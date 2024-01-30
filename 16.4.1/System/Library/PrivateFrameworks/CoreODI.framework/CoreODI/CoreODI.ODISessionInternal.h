@class NSString;

@interface CoreODI.ODISessionInternal : NSObject {
    void /* unknown type, empty encoding */ _pendingFeedback;
    void /* unknown type, empty encoding */ _odnator;
    void /* unknown type, empty encoding */ _odnAtorSessionId;
    void /* unknown type, empty encoding */ _bindingsManager;
    void /* unknown type, empty encoding */ _lastAssessmentTimedOut;
    void /* unknown type, empty encoding */ _triggerAssessmentCallback;
    void /* unknown type, empty encoding */ _armandDataFiller;
    void /* unknown type, empty encoding */ _armandDataInitialized;
    void /* unknown type, empty encoding */ _emptyPayload;
    void /* unknown type, empty encoding */ _emptyPayloadSessionId;
    void /* unknown type, empty encoding */ _assessmentTriggered;
    void /* unknown type, empty encoding */ _serviceIdentifier;
    void /* unknown type, empty encoding */ _dsidType;
    void /* unknown type, empty encoding */ _assessmentTiming;
    void /* unknown type, empty encoding */ sessionIdentifier;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ setODNAtorTask;
    void /* unknown type, empty encoding */ CORE_ODI_MAX_INIT_TIME;
    void /* unknown type, empty encoding */ CORE_ODI_MAX_WAIT_TIME;
    void /* unknown type, empty encoding */ CORE_ODI_MIN_WAIT_TIME;
    void /* unknown type, empty encoding */ CORE_ODI_RAW_WAIT_TIME;
    void /* unknown type, empty encoding */ CORE_ODI_BAA_CERT_MAX_TIME;
    void /* unknown type, empty encoding */ CORE_ODI_SEND_OTD_AFTER_SECONDS_IF_NO_ASSESSMENT;
    void /* unknown type, empty encoding */ dispatchQueue;
    void /* unknown type, empty encoding */ authorizedServices;
}

@property (nonatomic, readonly) NSString *description;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)updateWithAdditionalAttributes:(id)a0;
- (void)getAssessment:(id /* block */)a0;
- (void)provideFeedbackOnPayloadOutcome:(unsigned long long)a0;
- (id)initWithServiceIdentifier:(id)a0 forDSIDType:(unsigned long long)a1 locationBundle:(id)a2 andLocationBundleIdentifier:(id)a3;

@end
