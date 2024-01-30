@class NSObject, AMSSharedStoreReview;
@protocol OS_dispatch_queue;

@interface VUIAppReviewManager : NSObject {
    unsigned long long _numberOfAddToUpNexts;
    unsigned long long _numberOfPlaybacks;
    unsigned long long _numberOfAddToUpNextsBeforePrompting;
    unsigned long long _numberOfPlaybacksBeforePrompting;
    double _completionThreshold;
    double _highestPlaybackProgress;
    AMSSharedStoreReview *_sharedStoreReview;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) unsigned long long lastPlaybackEvent;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)isFeatureEnabled:(id /* block */)a0;
- (void)dealloc;
- (void)processAddToUpNext;
- (void)_handleIsPlaybackUIBeingShownDidChange:(id)a0;
- (BOOL)_isYouthAccount;
- (BOOL)_shouldAttemptToPrompt;
- (void)_attemptToPrompt;
- (void)_resetStates;
- (void)setMostRecentPlaybackProgressForNonTrailerContent:(double)a0;
- (void)reportApplicationDidForegroundtoAMSSharedStoreReview;

@end
