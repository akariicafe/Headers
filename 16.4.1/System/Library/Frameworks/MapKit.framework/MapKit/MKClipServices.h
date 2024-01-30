@class NSObject;
@protocol OS_dispatch_queue;

@interface MKClipServices : NSObject {
    NSObject<OS_dispatch_queue> *_requestAppClipMetadataQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_validateAppClipBasedQuickLinks:(id)a0 completion:(id /* block */)a1;
- (void)appClipWithQuickLink:(id)a0 completion:(id /* block */)a1;
- (void)appClipsFromQuickLinks:(id)a0 completion:(id /* block */)a1;
- (void)quickLinksCopyByRemovingNonAvailableAppClipLinks:(id)a0 completion:(id /* block */)a1;
- (void)requestAppClip:(id)a0 completion:(id /* block */)a1;

@end
