@class NSString;
@protocol SXViewControllerPresenting;

@interface SXCloseActionActivityProvider : NSObject <SXActionActivityProvider> {
    id<SXViewControllerPresenting> _viewControllerPresenting;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityGroupForAction:(id)a0;

@end
