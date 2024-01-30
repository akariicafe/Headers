@class NSXPCConnection;

@interface WKWallpaperMigrator : NSObject <WKWallpaperMigratorProtocol>

@property (class, readonly, nonatomic) WKWallpaperMigrator *defaultMigrator;

@property (retain, nonatomic) NSXPCConnection *_serviceConnection;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_setupServiceConnection;
- (void)migrateLegacyWallpaperIfNeededWithCompletion:(id /* block */)a0;
- (void)resetWallpaperKitStateWithCompletion:(id /* block */)a0;

@end
