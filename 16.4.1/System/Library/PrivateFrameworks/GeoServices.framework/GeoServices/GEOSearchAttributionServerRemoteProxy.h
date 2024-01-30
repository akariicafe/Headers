@class NSString, GEOSearchAttributionManifest, NSObject;
@protocol OS_dispatch_queue;

@interface GEOSearchAttributionServerRemoteProxy : NSObject <GEOSearchAttributionServerProxy> {
    NSObject<OS_dispatch_queue> *_attributionQueue;
    GEOSearchAttributionManifest *_attributionManifest;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _attributionManifestLock;
    int _attributionManifestUpdatedToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_attributionManifest;
- (void)_loadAttributionInfoForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadAttributionInfoForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;

@end
