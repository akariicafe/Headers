@class HMHome, NSString, NAFuture;

@interface HULockAccessUpdateViewController : OBWelcomeController <HUPreloadableViewController>

@property (readonly, nonatomic) NAFuture *preloadFuture;
@property (readonly, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)hu_preloadContent;

@end
