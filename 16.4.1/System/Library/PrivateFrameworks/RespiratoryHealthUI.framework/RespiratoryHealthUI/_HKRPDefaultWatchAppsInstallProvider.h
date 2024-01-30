@class NSString;

@interface _HKRPDefaultWatchAppsInstallProvider : NSObject <HKRPWatchInstallAppsProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)installApp:(id)a0 onPairedDevice:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
