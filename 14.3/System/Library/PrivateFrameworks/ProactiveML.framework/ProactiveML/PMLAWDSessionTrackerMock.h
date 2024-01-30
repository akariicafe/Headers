@class NSArray, NSMutableArray;

@interface PMLAWDSessionTrackerMock : PMLAWDSessionTracker {
    NSMutableArray *_internalTrackedSessions;
}

@property (readonly, nonatomic) NSArray *trackedSessions;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)postMetricId:(unsigned int)a0 message:(id)a1;
- (void)clearTrackedSessions;

@end
