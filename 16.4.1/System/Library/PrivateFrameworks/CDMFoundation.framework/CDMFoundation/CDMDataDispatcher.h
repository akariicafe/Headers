@class SiriNLUSELFRequestLinkData, NSString, NLXSchemaNLXClientEventMetadata, NSObject;
@protocol OS_dispatch_queue;

@interface CDMDataDispatcher : NSObject

@property (readonly, nonatomic) NLXSchemaNLXClientEventMetadata *selfMetadata;
@property (readonly, nonatomic) SiriNLUSELFRequestLinkData *selfRequestLink;
@property (readonly, nonatomic) NSString *interactionId;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void).cxx_destruct;
- (id)getSELFMetadata;
- (void)dispatchCdmRequestData:(id)a0;
- (void)dispatchCdmResponseData:(id)a0;
- (void)dispatchContextUpdateData:(id)a0;
- (void)dispatchCorrectedUtteranceTokenizationData:(id)a0;
- (void)dispatchCurrentTurnTokenizationData:(id)a0;
- (void)dispatchLVCData:(id)a0 withResponse:(id)a1;
- (void)dispatchMDData:(id)a0 withResponse:(id)a1;
- (void)dispatchMRData:(id)a0 withResponse:(id)a1;
- (void)dispatchNLv4Data:(id)a0 withResponse:(id)a1;
- (void)dispatchPSCData:(id)a0 withResponse:(id)a1;
- (void)dispatchPreviousTurnTokenizationData:(id)a0;
- (void)dispatchSNLCData:(id)a0 withResponse:(id)a1;
- (void)dispatchSpanizationData:(id)a0;
- (void)dispatchUaaPData:(id)a0 withResponse:(id)a1;
- (id)getInteractionId;
- (id)getSELFRequestLinkData;
- (id)initWithRequestId:(id)a0;
- (void)insertFeatureStore:(id /* block */)a0 debugLog:(id)a1;
- (void)waitForQueueCompletion;

@end
