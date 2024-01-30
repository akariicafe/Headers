@class MPCMediaFoundationTranslator, NSObject;
@protocol OS_dispatch_source;

@interface MPCItemBookmarker : NSObject

@property (retain, nonatomic) MPCMediaFoundationTranslator *translator;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *bookmarkingTimer;

- (void).cxx_destruct;
- (id)initWithTranslator:(id)a0;
- (void)userDidSkipDuringPlaybackFromItem:(id)a0 direction:(long long)a1;
- (void)currentItemWillChangeFromItem:(id)a0 toItem:(id)a1 time:(double)a2;
- (void)itemDidBecomeCurrent:(id)a0 time:(double)a1;
- (void)itemDidResignCurrent:(id)a0 time:(double)a1;
- (void)itemDidPlayToEnd:(id)a0 time:(double)a1;
- (void)playbackDidStartForItem:(id)a0 time:(double)a1 rate:(float)a2;
- (void)playbackDidStopForItem:(id)a0 time:(double)a1;
- (void)playbackRateDidChangeToRate:(float)a0 forItem:(id)a1 time:(double)a2;
- (void)playbackStateDidChangeFromState:(long long)a0 toState:(long long)a1 forItem:(id)a2 time:(double)a3 rate:(float)a4;
- (void)updateDurationSnapshotWithTime:(double)a0 forItem:(id)a1 rate:(float)a2;
- (void)_setupBookmarkingTimerForItem:(id)a0;
- (void)_teardownBookmarkingTimer;

@end
