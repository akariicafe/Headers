@class NSMutableDictionary;

@interface NTKSyncedAlbumObserver : NSObject {
    NSMutableDictionary *_deviceAlbumObservers;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0 forDevice:(id)a1;
- (id)syncedAlbumNameForDevice:(id)a0;
- (void)removeObserver:(id)a0 forDevice:(id)a1;

@end
