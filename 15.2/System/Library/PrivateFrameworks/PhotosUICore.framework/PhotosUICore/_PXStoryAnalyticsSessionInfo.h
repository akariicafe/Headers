@protocol CPAnalyticsEventProtocol;

@interface _PXStoryAnalyticsSessionInfo : NSObject

@property (retain, nonatomic) id<CPAnalyticsEventProtocol> startEvent;
@property (readonly, nonatomic) long long pauseCount;
@property (readonly, nonatomic) long long appSuspensionCount;
@property (retain, nonatomic) id<CPAnalyticsEventProtocol> endEvent;

- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)didSuspendAppWithEvent:(id)a0;
- (void)didPauseWithEvent:(id)a0;
- (void)finalizeWithEvent:(id)a0;

@end
