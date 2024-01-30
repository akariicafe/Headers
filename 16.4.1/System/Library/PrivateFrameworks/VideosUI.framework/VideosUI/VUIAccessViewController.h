@class NSString;

@interface VUIAccessViewController : UINavigationController <UIViewControllerTransitioningDelegate>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_grantAccessToBundleIDs:(id)a0;
+ (BOOL)_grantAccessToChannelIDs:(id)a0 isReconsent:(BOOL)a1;
+ (id)eligibleBundleIDs;
+ (BOOL)grantAccessToBundleIDs:(id)a0;
+ (void)optInUser;
+ (void)resolveBundleIDs:(id)a0 completionHandler:(id /* block */)a1;

@end
