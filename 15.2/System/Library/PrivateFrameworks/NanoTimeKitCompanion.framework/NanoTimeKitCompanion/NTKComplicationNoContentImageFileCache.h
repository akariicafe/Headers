@class NSMutableDictionary, NSString, NTKTaskScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface NTKComplicationNoContentImageFileCache : NSObject {
    NSMutableDictionary *_queue_complicationNoContentImages;
    BOOL _cacheDirty;
    NTKTaskScheduler *_taskScheduler;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSString *_cacheIdentifier;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_flushCache;
- (void)_dirtyCache;
- (id)imageForClientIdentifier:(id)a0 family:(long long)a1;
- (void)setImage:(id)a0 forClientIdentifier:(id)a1 family:(long long)a2;
- (id)noContentImagesForClientIdentifier:(id)a0;
- (void)setNoContentImages:(id)a0 forClientIdentifier:(id)a1;
- (void)removeAllEntriesExceptThoseWithClientIdentifiers:(id)a0;

@end
