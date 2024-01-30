@class NSObject;
@protocol OS_dispatch_queue;

@interface CLKWatchFaceLibrary : NSObject {
    NSObject<OS_dispatch_queue> *_helperQueue;
}

+ (id)sharedInstance;
+ (id)errorWithCode:(long long)a0;
+ (BOOL)_unzipFile:(id)a0 toPath:(id)a1;

- (void)addWatchFaceAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_addWatchFaceAtURL:(id)a0 shouldValidate:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)_importWatchFaceAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_validateWatchFaceAtURL:(id)a0 completionHandler:(id /* block */)a1;

@end
