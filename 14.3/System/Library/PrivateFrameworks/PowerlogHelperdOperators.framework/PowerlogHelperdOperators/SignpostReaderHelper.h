@class NSXPCConnection;

@interface SignpostReaderHelper : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToServer;

- (void).cxx_destruct;
- (id)getSignpostSummaryWithWhitelist:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (id)generateSignpostSubmissionWithTagConfig:(id)a0 withWhitelist:(id)a1 withStartDate:(id)a2 withEndDate:(id)a3 includeSPFile:(BOOL)a4;
- (id)customGetNearestMidnight;
- (id)processSignpostWithConfig:(id)a0 withServiceType:(int)a1;
- (id)createXPCConnection;
- (void)closeXPCConnection;
- (id)getSignpostMetricsWithStartDate:(id)a0 withEndDate:(id)a1 processMXSignpost:(BOOL)a2;

@end
