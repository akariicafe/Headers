@class NSString, NSURL, NSObject, GEODataSessionTask;
@protocol OS_dispatch_queue, NSObject;

@interface GEOResourceManifestDownloadTask : NSObject <GEODataSessionTaskDelegate> {
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _started;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _finished;
    NSObject<OS_dispatch_queue> *_queue;
    id<NSObject> _transaction;
    NSURL *_url;
    NSString *_existingETag;
    GEODataSessionTask *_task;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id /* block */ _callback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0 eTag:(id)a1;
- (void)dataSession:(id)a0 didCompleteTask:(id)a1;
- (void).cxx_destruct;
- (void)_captureNetworkEventForTask:(id)a0;
- (void)_finishWithUpdatedManifest:(id)a0 newETag:(id)a1 isExistingManifestCurrent:(BOOL)a2 error:(id)a3;
- (id)init;
- (void)startWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancel;

@end
