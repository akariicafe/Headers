@class NSDictionary, NSMutableArray;
@protocol _TVPagePerformanceDelegate;

@interface _TVPagePerformanceController : NSObject {
    struct timeval { long long tv_sec; int tv_usec; } _baseTimeval;
    unsigned long long _baseAbsoluteTime;
    NSMutableArray *_templateEntries;
}

@property (nonatomic) unsigned long long viewWillLoad;
@property (nonatomic) unsigned long long viewDidLoad;
@property (nonatomic) unsigned long long viewWillAppear;
@property (nonatomic) unsigned long long viewDidAppear;
@property (nonatomic) unsigned long long viewWillDisappear;
@property (nonatomic) unsigned long long viewDidDisappear;
@property (nonatomic) BOOL pageIsLoading;
@property (nonatomic) BOOL pageHasSubpages;
@property (nonatomic) BOOL pageWasInterrupted;
@property (nonatomic) BOOL pageWasUpdated;
@property (nonatomic) unsigned long long pageCompleteDuration;
@property (nonatomic) unsigned long long pageSetupDuration;
@property (nonatomic) unsigned long long pageRenderDuration;
@property (nonatomic) unsigned long long pageResourceDuration;
@property (nonatomic) unsigned long long pageTransitionDuration;
@property (weak, nonatomic) id<_TVPagePerformanceDelegate> delegate;
@property (readonly, nonatomic) NSDictionary *metrics;

+ (void)postNotificationForImageProxy:(id)a0 withLoadingStatus:(BOOL)a1;
+ (BOOL)isPerformanceUIEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)markViewDidLoad;
- (BOOL)_isMetricsReady;
- (void)_calculatePageDurations;
- (void)_maybeDeliverMetrics;
- (id)buildPagePerformanceView;
- (id)getEntryForTemplate:(id)a0;
- (void)markViewDidAppear;
- (void)markViewDidDisappear;
- (void)markViewWillAppear;
- (void)markViewWillDisappear;
- (void)markViewWillLoad;
- (unsigned long long)templateDidComplete;

@end
