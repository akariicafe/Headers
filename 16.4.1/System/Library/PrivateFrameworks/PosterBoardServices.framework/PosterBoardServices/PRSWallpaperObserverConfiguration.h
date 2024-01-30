@class PRSWallpaperLocationStateObserver, PRSWallpaperSnapshotObserver, NSObject;
@protocol OS_dispatch_queue;

@interface PRSWallpaperObserverConfiguration : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) PRSWallpaperLocationStateObserver *locationStateObserver;
@property (retain, nonatomic) PRSWallpaperSnapshotObserver *snapshotObserver;

+ (id)configurationWithHandler:(id /* block */)a0;

- (void)setQueue:(id)a0;
- (BOOL)isValid;
- (unsigned long long)locations;
- (id)init;
- (void)setLocations:(unsigned long long)a0;
- (void).cxx_destruct;

@end
