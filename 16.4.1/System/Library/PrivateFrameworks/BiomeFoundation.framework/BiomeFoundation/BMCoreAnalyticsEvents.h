@interface BMCoreAnalyticsEvents : NSObject

+ (void)sendEvent:(id)a0 payload:(id)a1;
+ (void)sendPrunePublicStream:(long long)a0 deletionInterval:(double)a1 eventDeletionCount:(unsigned int)a2;
+ (void)sendUnreadableEventTime:(double)a0 stream:(long long)a1 segmentTime:(double)a2;
+ (id)dictionaryWithUnreadableSegment:(double)a0 stream:(long long)a1 size:(unsigned int)a2;
+ (id)dictionaryWithUnreadableEventTime:(double)a0 stream:(long long)a1 segmentTime:(double)a2;
+ (void)sendDatavaultEntitlementUsage:(id)a0;
+ (id)dictionaryWithPrunePublicStream:(long long)a0 deletionInterval:(double)a1 eventDeletionCount:(unsigned int)a2;
+ (void)sendUnreadableSegment:(double)a0 stream:(long long)a1 size:(unsigned int)a2;
+ (id)dictionaryWithAllStreamsEventWritten:(BOOL)a0 size:(unsigned int)a1 streamIdentifier:(id)a2;
+ (void)sendAllStreamsEventWritten:(BOOL)a0 size:(unsigned int)a1 streamIdentifier:(id)a2;
+ (id)dictionaryWithBookmarkResumeFailureTime:(double)a0 bookmarkCreationTime:(double)a1 publicStream:(long long)a2;
+ (id)dictionaryWithDatavaultByUsageExecutableName:(id)a0;
+ (void)sendBookmarkResumeFailureTime:(double)a0 bookmarkCreationTime:(double)a1 publicStream:(long long)a2;

@end
