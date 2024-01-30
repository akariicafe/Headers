@class NSString;

@interface ASDInstallApps : NSObject <ASDServiceProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_availableMetadataClasses;
+ (void)installApp:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)installApps:(id)a0 onPairedDevice:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (id)interface;
+ (void)_installApps:(id)a0 onPairedDevice:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (void)installApps:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)installApp:(id)a0 onPairedDevice:(id)a1 withCompletionHandler:(id /* block */)a2;


@end
