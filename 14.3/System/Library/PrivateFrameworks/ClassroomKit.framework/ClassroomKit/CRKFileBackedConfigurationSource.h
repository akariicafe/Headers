@class NSString, NSURL, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue, CRKFileBackedConfigurationSourceDelegate;

@interface CRKFileBackedConfigurationSource : NSObject <CRKConfigurationSource> {
    NSURL *mFileURL;
    NSObject<OS_dispatch_queue> *mCallbackQueue;
    NSOperationQueue *mFileOperationQueue;
}

@property (weak) id<CRKFileBackedConfigurationSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (id)directoryURL;
- (void)fetchConfiguration:(id /* block */)a0;
- (void)setConfiguration:(id)a0 completion:(id /* block */)a1;
- (id)initWithFileURL:(id)a0 callbackQueue:(id)a1;
- (void)invokeCompletionBlock:(id /* block */)a0 withError:(id)a1;
- (BOOL)deleteConfigurationAtURL:(id)a0 inDirectory:(id)a1 error:(id *)a2;
- (void)executeIntents:(id)a0 accessBlock:(id /* block */)a1;
- (void)delegateDidDeleteConfigurationAtURL:(id)a0 inDirectory:(id)a1;
- (void)invokeCompletionBlock:(id /* block */)a0 withConfiguration:(id)a1 error:(id)a2;
- (BOOL)isReadErrorBenign:(id)a0;

@end
