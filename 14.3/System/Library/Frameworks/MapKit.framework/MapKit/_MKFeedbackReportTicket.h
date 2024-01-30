@class NSString, GEOMapServiceTraits;
@protocol GEOMapServiceFeedbackReportTicket;

@interface _MKFeedbackReportTicket : NSObject <MKMapServiceFeedbackReportTicket> {
    id<GEOMapServiceFeedbackReportTicket> _ticket;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)submitWithCallbackQueue:(id)a0 handler:(id /* block */)a1 networkActivity:(id /* block */)a2;
- (void).cxx_destruct;
- (void)submitWithHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;
- (id)initWithFeedbackReportTicket:(id)a0;

@end
