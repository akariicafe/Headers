@class NSString, PRSWallpaperPublisher, BSServiceConnection, PRSServerPosterPath;
@protocol BSServiceConnectionHost, PRSWallpaperObserving;

@interface PRSWallpaperClient : NSObject <PRSWallpaperObserverInitializing> {
    PRSWallpaperPublisher *_publisher;
    BSServiceConnection<BSServiceConnectionHost> *_connection;
    id<PRSWallpaperObserving> _proxy;
    NSString *_description;
    PRSServerPosterPath *_lastPaths[4];
    unsigned long long _changeVersions[4];
    unsigned long long _observed;
    BOOL _needsSandboxExtensions;
    BOOL _initialized;
    BOOL _observingSnapshotChanges;
    BOOL _observingPathChanges;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)initializeWithKnownIdentities:(id)a0;
- (void).cxx_destruct;

@end
