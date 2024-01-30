@class NSString;

@interface SBPPTSearchGestureObserver : NSObject <SBSearchGestureObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchGesture:(id)a0 changedPercentComplete:(double)a1;
- (void)searchGesture:(id)a0 startedShowing:(BOOL)a1;
- (void)searchGesture:(id)a0 completedShowing:(BOOL)a1;

@end
