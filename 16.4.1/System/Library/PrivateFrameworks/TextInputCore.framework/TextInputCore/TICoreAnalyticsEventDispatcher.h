@class NSString;

@interface TICoreAnalyticsEventDispatcher : NSObject <TITypingSessionAggregatedEventObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sessionDidEnd:(id)a0 aligned:(id)a1;

@end
