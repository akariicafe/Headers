@class NSOperationQueue, NSString, SKUIClientContext;
@protocol SKUIPassbookLoaderDelegate;

@interface SKUIPassbookLoader : NSObject <PKAddPassesViewControllerDelegate> {
    SKUIClientContext *_clientContext;
    long long _loadCount;
}

@property (weak, nonatomic) id<SKUIPassbookLoaderDelegate> delegate;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addPassesViewControllerDidFinish:(id)a0;
- (id)initWithClientContext:(id)a0;
- (void)loadPassWithURL:(id)a0;
- (void)_loadPassWithURL:(id)a0;
- (void)_sendDidFinishIfFinished;
- (void)_didLoadWithPass:(id)a0 error:(id)a1;

@end
