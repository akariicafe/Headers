@class NSXPCInterface;

@interface PLAssetsdInterface : NSObject

@property (class, readonly) NSXPCInterface *assetsdInterface;

+ (void)_addCloudInterfaces:(id)a0;
+ (void)_addDebugInterface:(id)a0;
+ (void)_addMigrationInterface:(id)a0;
+ (void)_addLibraryInterfaces:(id)a0;
+ (void)_addDemoInterface:(id)a0;
+ (void)_addSyncInterface:(id)a0;
+ (void)_addResourceInterfaces:(id)a0;
+ (void)_addDiagnosticsInterface:(id)a0;
+ (void)_addResourceAvailabilityInterface:(id)a0;
+ (void)_addNotificationInterface:(id)a0;
+ (void)_addPhotoKitInterface:(id)a0;
+ (void)_addPhotoKitAddInterface:(id)a0;

@end
