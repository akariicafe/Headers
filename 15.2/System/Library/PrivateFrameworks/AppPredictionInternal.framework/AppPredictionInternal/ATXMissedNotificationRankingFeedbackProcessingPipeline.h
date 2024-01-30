@class NSString, ATXEngagementTrackedMissedNotificationRankingBiomeStream;
@protocol BMBookmark;

@interface ATXMissedNotificationRankingFeedbackProcessingPipeline : NSObject {
    id<BMBookmark> _bookmark;
    NSString *_path;
    ATXEngagementTrackedMissedNotificationRankingBiomeStream *_trackedMNRStream;
}

- (BOOL)_fileExistsAtPath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)logMetrics;
- (void)_readBookmarkFromPath;
- (void)_writeBookmarkToPath;
- (void)logMetricsWithXPCActivity:(id)a0;
- (id)initWithBookmark:(id)a0 path:(id)a1 trackedMNRStream:(id)a2;
- (void)logMetricsForRanking:(id)a0;

@end
