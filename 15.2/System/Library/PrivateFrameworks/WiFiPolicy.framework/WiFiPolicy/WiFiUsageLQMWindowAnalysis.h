@class NSDate, NSString, NSArray, NSMutableDictionary, NSDictionary, NSMutableArray, NSObject, WiFiUsageLQMRollingWindow;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface WiFiUsageLQMWindowAnalysis : NSObject {
    NSMutableDictionary *dimensions;
}

@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) BOOL isDone;
@property (retain, nonatomic) NSDictionary *summary;
@property (retain, nonatomic) NSMutableArray *subsequentTriggers;
@property (retain, nonatomic) NSArray *preceedingTriggers;
@property (retain, nonatomic) NSString *fgApp;
@property (retain, nonatomic) NSString *metricNameCDF;
@property (retain, nonatomic) NSString *metricNameSankey;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *analysisTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analysisQueue;
@property (retain, nonatomic) WiFiUsageLQMRollingWindow *windowBeforeTrigger;
@property (retain, nonatomic) WiFiUsageLQMRollingWindow *windowAfterTrigger;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSMutableDictionary *lqmWindowsFeatures;

+ (void)initialize;
+ (void)updateConfig;
+ (id)config;
+ (BOOL)isKernerlParsingEnabled;
+ (void)computeFeatures:(id)a0 For:(id)a1 WithLogLabel:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (void)performAnalysis;
- (id)initWithRollingWindow:(id)a0 andReason:(id)a1 onQueue:(id)a2;
- (id)addDimensionsTo:(id)a0;
- (id)metricCallbackForMetric:(id)a0 AndField:(id)a1;
- (void)updateWithLQMSample:(id)a0;
- (void)updateWithSubsequentTrigger:(id)a0;
- (BOOL)getBeforeKernelWindowWithLikelyhood;
- (BOOL)isAnalysisTodo;
- (id)fetchKernelLQMRollingWindowForInterface:(id)a0 into:(id)a1;
- (void)computeFeaturesFor:(id)a0 WithLogLabel:(id)a1;
- (id)dumpDimensions:(id)a0;
- (id)dumpAnalysis:(id)a0;
- (void)computeBins:(id)a0 WithSampleKind:(Class)a1;

@end
