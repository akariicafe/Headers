@class NSString;

@interface SKInstallSheetStatusUpdateRequest : SKRequest

@property (readonly, nonatomic) NSString *bundleId;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)_start;
- (void).cxx_destruct;
- (id)initWithAppBundleId:(id)a0 isInstallSheetOpen:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
