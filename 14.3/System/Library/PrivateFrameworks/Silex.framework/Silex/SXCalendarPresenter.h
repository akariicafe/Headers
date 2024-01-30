@class NSString, SXEventStoreProvider;
@protocol SXViewControllerPresenting;

@interface SXCalendarPresenter : NSObject <EKEventEditViewDelegate, SXCalendarPresenter>

@property (readonly, nonatomic) id<SXViewControllerPresenting> viewControllerPresenting;
@property (readonly, nonatomic) SXEventStoreProvider *eventStoreProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
