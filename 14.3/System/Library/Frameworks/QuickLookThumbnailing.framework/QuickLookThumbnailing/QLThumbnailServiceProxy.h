@class NSObject, NSXPCConnection;
@protocol QLThumbnailsInterface, QLThumbnailAdditionIndexInterface;

@interface QLThumbnailServiceProxy : NSObject {
    NSXPCConnection *_connection;
    NSObject<QLThumbnailsInterface> *_proxy;
    NSObject<QLThumbnailAdditionIndexInterface> *_indexProxy;
}

+ (id)sharedInstance;
+ (id)interface;
+ (id)sharedInstanceWithError:(id *)a0;

- (id)initWithError:(id *)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateLastHitDateOfAddition:(id)a0 onPhysicalURL:(id)a1;
- (void)askThumbnailAdditionIndex:(id /* block */)a0;
- (id)indexProxy;
- (void)touchOrAddThumbnailAddition:(id)a0 forURL:(id)a1;

@end
