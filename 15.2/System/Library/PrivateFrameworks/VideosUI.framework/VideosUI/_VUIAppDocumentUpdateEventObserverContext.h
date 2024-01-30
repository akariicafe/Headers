@class NSSet, NSMutableDictionary, UIViewController;

@interface _VUIAppDocumentUpdateEventObserverContext : NSObject

@property (copy, nonatomic) NSSet *eventDescriptors;
@property (retain, nonatomic) NSMutableDictionary *refreshTimerByEventDescriptor;
@property (copy, nonatomic) id /* block */ refreshTimerFiredBlock;
@property (retain, nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (void)_cancelAllRefreshTimers;
- (id)_refreshTimerWithRefreshTimeEventDescriptor:(id)a0;
- (void)_startRefreshTimer:(id)a0;
- (void)_cancelRefreshTimers:(id)a0;
- (void)_cancelRefreshTimer:(id)a0;

@end
