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

- (void)addPassesViewControllerDidFinish:(id)a0;
- (void).cxx_destruct;
- (void)_didLoadWithPass:(id)a0 error:(id)a1;
- (void)_loadPassWithURL:(id)a0;
- (void)_sendDidFinishIfFinished;
- (id)initWithClientContext:(id)a0;
- (void)loadPassWithURL:(id)a0;

@end
