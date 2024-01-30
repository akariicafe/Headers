@class AWDServerConnection;
@protocol PMLAWDMetricQueryDelegate;

@interface PMLAWDAvailableSessionsTracker : PMLAWDBaseTracker {
    id<PMLAWDMetricQueryDelegate> _delegate;
    AWDServerConnection *_awdServerConnection;
}

- (void).cxx_destruct;
- (id)init;
- (void)reportStatsToAWD;
- (id)initWithAWDConnection:(id)a0;
- (void)setAWDMetricQueryDelegate:(id)a0;

@end
