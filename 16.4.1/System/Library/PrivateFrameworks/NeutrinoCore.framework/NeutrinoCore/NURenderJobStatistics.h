@class NSArray, NSMutableDictionary, NSString;

@interface NURenderJobStatistics : NSObject <NURenderStatistics>

@property (class, readonly) NSMutableDictionary *history;

@property double requestTime;
@property double willPrepareTime;
@property double didPrepareTime;
@property double willRenderTime;
@property double didRenderTime;
@property double willCompleteTime;
@property double didCompleteTime;
@property double responseTime;
@property (copy) NSArray *dependencies;
@property (readonly) double latency;
@property (readonly) double duration;
@property (readonly) double totalDuration;
@property (readonly) double prepareLatency;
@property (readonly) double prepareDuration;
@property (readonly) double renderLatency;
@property (readonly) double renderDuration;
@property (readonly) double completeLatency;
@property (readonly) double completeDuration;
@property (readonly) double replyLatency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aggregateStatistics:(id)a0;
+ (void)addStatisticsToHistory:(id)a0 forJob:(id)a1 wasCanceled:(BOOL)a2;
+ (void)recordJobCreatedToHistory:(id)a0;

- (void).cxx_destruct;
- (double)lastRecordedTime;
- (void)renderJob:(id)a0 didRunStage:(long long)a1;
- (void)renderJob:(id)a0 willRunStage:(long long)a1;

@end
