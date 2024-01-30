@class NSArray, NSMutableArray;

@interface PMLAWDSessionTrackerMock : PMLAWDSessionTracker {
    NSMutableArray *_internalTrackedSessions;
}

@property (readonly, nonatomic) NSArray *trackedSessions;

- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (void)postMetricId:(unsigned int)a0 message:(id)a1;
- (void)clearTrackedSessions;

@end
