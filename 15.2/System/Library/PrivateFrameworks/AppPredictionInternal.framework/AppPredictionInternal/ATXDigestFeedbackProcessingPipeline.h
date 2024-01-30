@class NSString, ATXNotificationDigestFeedbackLogger, ATXEngagementTrackedDigestBiomeStream;
@protocol BMBookmark;

@interface ATXDigestFeedbackProcessingPipeline : NSObject {
    id<BMBookmark> _bookmark;
    NSString *_path;
    ATXEngagementTrackedDigestBiomeStream *_trackedDigestStream;
    ATXNotificationDigestFeedbackLogger *_feedbackLogger;
}

- (BOOL)_fileExistsAtPath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)logMetrics;
- (id)initWithBookmark:(id)a0 path:(id)a1 trackedDigestStream:(id)a2 digestFeedbackLogger:(id)a3;
- (void)_readBookmarkFromPath;
- (void)_writeBookmarkToPath;
- (void)logFeedbackForDigest:(id)a0;
- (void)logMetricsForDigest:(id)a0;
- (void)logMetricsWithXPCActivity:(id)a0;
- (id)initWithBookmark:(id)a0 path:(id)a1 trackedDigestStream:(id)a2;

@end
