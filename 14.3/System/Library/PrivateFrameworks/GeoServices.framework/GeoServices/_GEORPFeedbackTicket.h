@class NSString, GEOMapServiceTraits, NSData, GEORPFeedbackRequestParameters, GEORPUserCredentials, GEORPFeedbackRequest;
@protocol GEOMapItem;

@interface _GEORPFeedbackTicket : GEOAbstractTicket <GEOMapServiceFeedbackReportTicket> {
    NSData *_resubmissionData;
    GEORPFeedbackRequestParameters *_feedbackRequestParameters;
    id<GEOMapItem> _place;
    GEORPFeedbackRequest *_feedbackRequest;
    GEORPUserCredentials *_userCredentials;
    NSData *_pushToken;
    NSString *_emailAddress;
    BOOL _started;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)initWithFeedbackRequestParameters:(id)a0 placeForProblemContext:(id)a1 userCredentials:(id)a2 pushToken:(id)a3 allowContactBackAtEmailAddress:(id)a4 traits:(id)a5;
- (void).cxx_destruct;
- (struct { int x0; union { int x0; int x1; int x2; } x1; })dataRequestKind;
- (void)submitWithHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;
- (id)initWithFeedbackRequest:(id)a0 traits:(id)a1;
- (id)initWithFeedbackRequestData:(id)a0 traits:(id)a1;

@end
