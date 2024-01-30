@class NSProgress, NSString;

@interface ICRequestOperation : ICAsyncOperation <NSProgressReporting> {
    id /* block */ _completionHandler;
}

@property (retain, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)performRequestWithCompletionHandler:(id /* block */)a0;
- (void)performRequestOnOperationQueue:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
