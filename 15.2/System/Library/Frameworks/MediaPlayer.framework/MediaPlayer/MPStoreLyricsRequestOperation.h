@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface MPStoreLyricsRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (nonatomic) long long songAdamID;
@property (copy, nonatomic) id /* block */ responseHandler;

+ (BOOL)supportsLyricsForURLBagDictionary:(id)a0;
+ (id)_lyricsURLForURLBagDictionary:(id)a0;

- (void)execute;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)_enqueueOperationWithURL:(id)a0 bagDictionary:(id)a1 allowingAuthentication:(BOOL)a2;

@end
