@class NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface TXRDeferredElementInfo : NSObject {
    NSObject<OS_dispatch_semaphore> *_infoLoaded;
}

@property (readonly, nonatomic) NSMutableArray *faces;

- (void).cxx_destruct;
- (id)initAsCubemap:(BOOL)a0;

@end
