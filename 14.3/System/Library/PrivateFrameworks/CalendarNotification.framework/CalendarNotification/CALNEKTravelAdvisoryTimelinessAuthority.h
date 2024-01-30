@class NSString, EKTravelAdvisoryTimelinessAuthority;

@interface CALNEKTravelAdvisoryTimelinessAuthority : NSObject <CALNTravelAdvisoryTimelinessAuthority>

@property (readonly, nonatomic) EKTravelAdvisoryTimelinessAuthority *travelAdvisoryTimelinessAuthority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTravelAdvisoryTimelinessAuthority:(id)a0;
- (id)startOfLeaveNowPeriodForHypothesis:(id)a0;
- (id)startOfRunningLatePeriodForHypothesis:(id)a0;
- (unsigned long long)periodForHypothesis:(id)a0;

@end
