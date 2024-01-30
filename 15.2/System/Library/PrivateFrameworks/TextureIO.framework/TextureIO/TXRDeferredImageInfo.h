@class TXRImageInfo, NSObject;
@protocol OS_dispatch_semaphore;

@interface TXRDeferredImageInfo : NSObject {
    NSObject<OS_dispatch_semaphore> *_infoLoaded;
}

@property (retain, nonatomic) TXRImageInfo *info;

- (void).cxx_destruct;
- (id)init;
- (void)signalLoaded;

@end
