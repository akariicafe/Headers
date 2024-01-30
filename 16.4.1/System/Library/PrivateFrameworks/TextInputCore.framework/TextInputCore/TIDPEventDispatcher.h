@class NSString;
@protocol TIDPReportingDelegate;

@interface TIDPEventDispatcher : NSObject <TITypingSessionAggregatedEventObserver> {
    id<TIDPReportingDelegate> _reportingDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sessionDidEnd:(id)a0 aligned:(id)a1;
- (id)initWithReportingDelegate:(id)a0;
- (void).cxx_destruct;

@end
