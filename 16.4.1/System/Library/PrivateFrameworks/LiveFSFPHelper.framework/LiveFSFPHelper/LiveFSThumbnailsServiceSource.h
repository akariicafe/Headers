@class NSString, LiveFSFPExtensionHelper, QLExternalThumbnailCache;

@interface LiveFSThumbnailsServiceSource : NSObject <NSFileProviderServiceSource, NSXPCListenerDelegate, QLThumbnailCache> {
    LiveFSFPExtensionHelper *ex;
    QLExternalThumbnailCache *thumbnailCache;
}

@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)makeListenerEndpointAndReturnError:(id *)a0;
- (id)thumbnailCache;
- (void)getThumbnailCacheURLWrappersWithCompletion:(id /* block */)a0;
- (void)getThumbnailURLForItem:(id)a0 completion:(id /* block */)a1;
- (void)storeThumbnailAtURL:(id)a0 forItem:(id)a1 completion:(id /* block */)a2;
- (id)initWithFileProviderExtension:(id)a0;

@end
