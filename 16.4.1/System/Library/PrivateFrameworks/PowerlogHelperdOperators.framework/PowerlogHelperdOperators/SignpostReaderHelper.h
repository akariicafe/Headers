@class NSXPCConnection;

@interface SignpostReaderHelper : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToServer;

- (id)createXPCConnection;
- (void)closeXPCConnection;
- (void).cxx_destruct;
- (id)customGetNearestMidnight;
- (id)generateMSSWithStartDate:(id)a0 endDate:(id)a1 atPath:(id)a2;
- (id)generateRapidSignpostSummaryWithStartDate:(id)a0 endDate:(id)a1;
- (id)generateSignpostSubmissionWithTagConfig:(id)a0 withAllowlist:(id)a1 withStartDate:(id)a2 withEndDate:(id)a3 includeSPFile:(BOOL)a4;
- (id)getSignpostMetricsWithStartDate:(id)a0 withEndDate:(id)a1 processMXSignpost:(BOOL)a2;
- (id)getSignpostSummaryWithAllowlist:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (id)processSignpostWithConfig:(id)a0 withServiceType:(int)a1;

@end
