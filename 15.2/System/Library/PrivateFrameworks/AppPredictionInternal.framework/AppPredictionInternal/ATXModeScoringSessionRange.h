@class NSArray, NSDate;

@interface ATXModeScoringSessionRange : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSArray *sessions;

- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (void).cxx_destruct;
- (BOOL)_areTimesClose:(id)a0 secondTime:(id)a1;
- (BOOL)_shouldCoaleseNextSession:(id)a0 currentBuffer:(id)a1;
- (void)filterSessions;
- (void)attachAppLaunches;
- (void)populateInitialSessionsFromScreenTransitions;
- (void)coalesceSessions;

@end
