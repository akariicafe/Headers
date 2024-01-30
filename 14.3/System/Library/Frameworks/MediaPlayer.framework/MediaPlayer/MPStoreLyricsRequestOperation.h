@class MPStoreLyricsRequest, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface MPStoreLyricsRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (copy, nonatomic) MPStoreLyricsRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

+ (BOOL)supportsLyricsForURLBagDictionary:(id)a0;
+ (id)_lyricsURLForURLBagDictionary:(id)a0;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)execute;
- (void)_enqueueOperationWithURL:(id)a0 bagDictionary:(id)a1 allowingAuthentication:(BOOL)a2;

@end
