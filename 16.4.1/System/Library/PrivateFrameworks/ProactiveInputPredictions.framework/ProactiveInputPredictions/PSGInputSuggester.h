@class PSGInputSuggesterClient, PSGInputSuggestionsRequest, _PASTuple2, NSObject;
@protocol OS_dispatch_queue;

@interface PSGInputSuggester : NSObject {
    PSGInputSuggesterClient *_client;
    NSObject<OS_dispatch_queue> *_lastPredictionQueue;
    PSGInputSuggestionsRequest *_lastRequest;
    _PASTuple2 *_lastPrediction;
    _PASTuple2 *_lastImpression;
}

+ (id)sharedInstance;

- (void)hibernate;
- (id)initWithClient:(id)a0;
- (void)_reportSpeedMetricWithData:(id)a0;
- (void)logMetricForEventType:(unsigned char)a0 externalMetadata:(id)a1 request:(id)a2 responseItems:(id)a3;
- (void)warmUpForLocaleIdentifier:(id)a0;
- (void)inputSuggestionsWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)warmUp;
- (void)logMetricForEventType:(unsigned char)a0 externalMetadata:(id)a1 predictedValues:(id)a2;
- (void).cxx_destruct;
- (void)logTimeoutForRequest:(id)a0;

@end
