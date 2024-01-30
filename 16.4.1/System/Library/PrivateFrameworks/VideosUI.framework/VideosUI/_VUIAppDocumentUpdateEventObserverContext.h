@class NSSet, NSMutableDictionary, UIViewController;

@interface _VUIAppDocumentUpdateEventObserverContext : NSObject

@property (copy, nonatomic) NSSet *eventDescriptors;
@property (retain, nonatomic) NSMutableDictionary *refreshTimerByEventDescriptor;
@property (copy, nonatomic) id /* block */ refreshTimerFiredBlock;
@property (retain, nonatomic) UIViewController *viewController;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_cancelAllRefreshTimers;
- (void)_cancelRefreshTimer:(id)a0;
- (void)_cancelRefreshTimers:(id)a0;
- (id)_refreshTimerWithRefreshTimeEventDescriptor:(id)a0;
- (void)_startRefreshTimer:(id)a0;
- (void)updateDescriptorsWithDescriptors:(id)a0;

@end
