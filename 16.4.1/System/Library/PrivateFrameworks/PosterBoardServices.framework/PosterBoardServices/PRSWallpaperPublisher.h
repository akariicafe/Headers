@class NSString, NSMutableSet, BSServiceConnectionListener, PRSServerPosterPath;
@protocol PRSWallpaperPublisherDelegate;

@interface PRSWallpaperPublisher : NSObject <BSServiceConnectionListenerDelegate> {
    double _lock_changeVersionTimestamps[4];
    id<PRSWallpaperPublisherDelegate> _lock_delgate;
    BSServiceConnectionListener *_listener;
    NSMutableSet *_lock_clients;
    PRSServerPosterPath *_lock_paths[4];
    unsigned long long _lock_changeVersions[4];
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_activated;
}

@property (retain, nonatomic) id<PRSWallpaperPublisherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)delegate;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)_lock_sendStateToClient:(id)a0;
- (void)_initializeClient:(id)a0 withKnownIdentities:(id)a1;
- (void)setDelegate:(id)a0;
- (void)noteSnapshotUpdateForPath:(id)a0 snapshotType:(id)a1;
- (void)updatePaths:(const id *)a0;
- (void)_lock_noteSnapshotUpdateForPath:(id)a0 snapshotType:(id)a1;
- (id)init;
- (void)_lock_noteChanged:(unsigned long long)a0;
- (void)initializeWithPaths:(const id *)a0 recentlyChanged:(unsigned long long)a1;
- (void)_initializeClient:(id)a0;
- (id)_lock_descriptionIfInvalidPaths:(const id *)a0;
- (void).cxx_destruct;

@end
