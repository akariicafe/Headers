@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CPSImageDownloader : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_requests;
}

- (void).cxx_destruct;
- (id)init;
- (void)_downloadImageWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)downloadImageWithURL:(id)a0 completionHandler:(id /* block */)a1;

@end
