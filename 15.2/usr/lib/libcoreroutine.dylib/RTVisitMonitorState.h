@class RTVisit;

@interface RTVisitMonitorState : NSObject

@property (retain, nonatomic) RTVisit *lastVisitIncident;
@property (retain, nonatomic) RTVisit *lastLowConfidenceVisitIncident;

- (void)dump;
- (id)initWithLastVisit:(id)a0 lastLowConfidenceVisit:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
