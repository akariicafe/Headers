@class NSString;

@interface SXVideoComponentVisibilityMonitor : SXVisibilityMonitor <SXScrollObserving>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didScroll;
- (void)scrollingDidStop;
- (void)scrollingWillStart;

@end
