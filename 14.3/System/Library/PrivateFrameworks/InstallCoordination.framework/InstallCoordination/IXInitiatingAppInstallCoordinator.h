@class NSString;

@interface IXInitiatingAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithInitialODRAssetPromises, IXCoordinatorWithDeviceSecurityPromise, IXCoordinatorWithImportance>

@property (readonly, nonatomic) BOOL hasAppAssetPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasInstallOptions;
@property (readonly, nonatomic) BOOL hasInitialODRAssetPromises;

+ (BOOL)enumerateCoordinatorsWithError:(id *)a0 usingBlock:(id /* block */)a1;
+ (void)enumerateCoordinatorsUsingBlock:(id /* block */)a0;
+ (id)coordinatorForAppWithBundleID:(id)a0 withClientID:(unsigned long long)a1 createIfNotExisting:(BOOL)a2 created:(BOOL *)a3 error:(id *)a4;
+ (id)existingCoordinatorForAppWithBundleID:(id)a0 error:(id *)a1;

- (id)validInstallTypes;

@end
