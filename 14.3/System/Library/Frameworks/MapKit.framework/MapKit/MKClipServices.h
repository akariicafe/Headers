@class NSObject;
@protocol OS_dispatch_queue;

@interface MKClipServices : NSObject {
    NSObject<OS_dispatch_queue> *_removeNonAvailableAppClipLinksQueue;
    NSObject<OS_dispatch_queue> *_requestAppClipMetadataQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)appClipWithQuickLink:(id)a0 completion:(id /* block */)a1;
- (void)quickLinksCopyByRemovingNonAvailableAppClipLinks:(id)a0 completion:(id /* block */)a1;
- (void)requestAppClip:(id)a0 completion:(id /* block */)a1;

@end
