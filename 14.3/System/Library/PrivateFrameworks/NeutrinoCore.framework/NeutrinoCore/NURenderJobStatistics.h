@class NSArray, NSString;

@interface NURenderJobStatistics : NSObject <NURenderStatistics>

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

@end
