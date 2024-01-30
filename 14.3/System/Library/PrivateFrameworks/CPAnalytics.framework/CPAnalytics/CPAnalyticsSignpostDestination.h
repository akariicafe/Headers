@class NSString, CPAnalytics, NSMutableIndexSet;

@interface CPAnalyticsSignpostDestination : NSObject <CPAnalyticsDestination>

@property (class, readonly, nonatomic) BOOL disabled;

@property (weak, nonatomic) CPAnalytics *cpAnalyticsInstance;
@property (readonly, nonatomic) NSMutableIndexSet *startedSignpostIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)processEvent:(id)a0;
- (id)initWithConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (void).cxx_destruct;
- (void)_trackSignpostsStartForEvent:(id)a0;
- (void)_sendCPAnalyticsEvent:(id)a0 withPayload:(id)a1 withDuration:(double)a2;
- (void)_checkSignpostsEndForEvent:(id)a0;

@end
