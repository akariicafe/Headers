@class AWDServerConnection;
@protocol PMLAWDMetricQueryDelegate;

@interface PMLAWDAvailableSessionsTracker : PMLAWDBaseTracker {
    id<PMLAWDMetricQueryDelegate> _delegate;
    AWDServerConnection *_awdServerConnection;
}

- (id)init;
- (void).cxx_destruct;
- (void)reportStatsToAWD;
- (void)setAWDMetricQueryDelegate:(id)a0;
- (id)initWithAWDConnection:(id)a0;

@end
