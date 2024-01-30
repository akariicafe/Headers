@class NSMutableDictionary;

@interface VUIStreamingBookmarkCache : NSObject {
    NSMutableDictionary *_bookmarkCacheStore;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_activeAccountChangedNotification:(id)a0;
- (BOOL)resumeTimeAndTimestampByCanonical:(id)a0 serverResumeTime:(id)a1 serverBookmarkTimestamp:(id)a2 mostRecentResumeTime:(id *)a3 mostRecentBookmarkTimestamp:(id *)a4;
- (void)resumeTimeInfoByCanonical:(id)a0 outAbsoluteResumeTime:(id *)a1 outAbsoluteTimestamp:(id *)a2 outMainContentRelativeResumeTime:(id *)a3 outMainContentRelativeTimestamp:(id *)a4;
- (void)addBookmark:(id)a0 absoluteResumeTime:(id)a1 absoluteBookmarkTimestamp:(id)a2 relativeResumeTime:(id)a3 relativeBookmarkTimestamp:(id)a4;
- (void)removeBookmark:(id)a0;

@end
