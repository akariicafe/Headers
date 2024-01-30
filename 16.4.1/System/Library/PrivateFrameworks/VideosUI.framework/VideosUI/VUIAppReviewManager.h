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

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)isFeatureEnabled:(id /* block */)a0;
- (BOOL)_isYouthAccount;
- (void)_attemptToPrompt;
- (void)_handleIsPlaybackUIBeingShownDidChange:(id)a0;
- (void)_resetStates;
- (BOOL)_shouldAttemptToPrompt;
- (void)processAddToUpNext;
- (void)reportApplicationDidForegroundtoAMSSharedStoreReview;
- (void)setMostRecentPlaybackProgressForNonTrailerContent:(double)a0;

@end
