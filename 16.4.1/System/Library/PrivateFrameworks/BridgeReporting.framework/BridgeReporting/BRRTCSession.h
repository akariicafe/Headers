@interface BRRTCSession : NSObject

+ (id)reportingSession;
+ (id)_parentRTCReportingSession:(id)a0;
+ (void)startRTCReportingSessionWithConfiguration:(id)a0 andComplection:(id /* block */)a1;

@end
