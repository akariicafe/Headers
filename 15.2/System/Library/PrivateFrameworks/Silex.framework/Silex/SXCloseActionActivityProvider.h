@class NSString;
@protocol SXViewControllerPresenting, SXCloseActionHandler;

@interface SXCloseActionActivityProvider : NSObject <SXActionActivityProvider> {
    id<SXViewControllerPresenting> _viewControllerPresenting;
    id<SXCloseActionHandler> _handler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityGroupForAction:(id)a0;

@end
