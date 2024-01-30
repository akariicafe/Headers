@class MNNavigationClientProxy, GEODirectionsRequest, NSUUID, MNDirectionsRequestDetails, GEODirectionsResponse, MNTraceRecordingData;

@interface MNNavigationServiceDirectionsRequestTicket : NSObject {
    NSUUID *_requestIdentifier;
    MNNavigationClientProxy *_proxy;
    MNDirectionsRequestDetails *_request;
}

@property (readonly, nonatomic) GEODirectionsRequest *directionsRequest;
@property (readonly, nonatomic) GEODirectionsResponse *directionsResponse;
@property (readonly, nonatomic) MNTraceRecordingData *traceRecordingData;

- (void)cancel;
- (void).cxx_destruct;
- (void)submitWithHandler:(id /* block */)a0;
- (id)initWithProxy:(id)a0 request:(id)a1;

@end
