@class NSString, NSHashTable;

@interface SBAvocadoDebuggingController : NSObject <SBExtensionHandling> {
    NSHashTable *_inFlightAnimationTransactions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)launchExtensionWithBundleID:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)_descriptorForWidgetFromExtension:(id)a0 forRequestedKind:(id)a1 widgetFamily:(long long *)a2 toolService:(id)a3 error:(id *)a4;
- (void)reallyLaunchToWidgetOnHomeScreenForDescriptor:(id)a0 widgetFamily:(long long)a1;

@end
