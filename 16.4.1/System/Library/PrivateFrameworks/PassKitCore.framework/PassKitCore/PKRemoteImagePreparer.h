@class NSCache, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PKRemoteImagePreparer : NSObject {
    NSCache *_preparedImageCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _completionsLock;
    NSMutableDictionary *_completionHandlers;
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)fetchRemoteImage:(id)a0 completion:(id /* block */)a1;
- (void)fetchRemoteImage:(id)a0 preheatBitmap:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchRemoteImage:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 preheatBitmap:(BOOL)a2 completion:(id /* block */)a3;

@end
