@class NSString, SVTimeline, NSURL;
@protocol SVVideoMetadata, SXAnalyticsReporting;

@interface SXVideoProvider : NSObject <SVVideoProviding>

@property (weak, nonatomic) id<SVVideoMetadata> metadata;
@property (readonly, nonatomic) SVTimeline *timeline;
@property (nonatomic) double pausedAtTime;
@property (readonly, nonatomic) NSString *mediaIdentifier;
@property (nonatomic) unsigned long long playMethod;
@property (readonly, nonatomic) NSURL *URL;
@property (retain, nonatomic) id<SXAnalyticsReporting> analyticsReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double impressionThreshold;

- (id /* block */)loadWithCompletionBlock:(id /* block */)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)playbackInitiatedWithButtonTapped:(BOOL)a0;
- (void)playbackStarted;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackFinished;
- (void)playbackFailedWithError:(id)a0;
- (void)muteStateChanged:(BOOL)a0;
- (void)playbackPassedQuartile:(unsigned long long)a0;

@end
