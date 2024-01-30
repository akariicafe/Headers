@class AKAppleIDSession, NSObject;
@protocol OS_dispatch_queue;

@interface FTAuthKitManager : NSObject {
    AKAppleIDSession *_akAppleIDSession;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)anisetteHeadersForRequest:(id)a0 completionBlockQueue:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleResponse:(id)a0 forRequest:(id)a1 completionBlock:(id /* block */)a2;

@end
