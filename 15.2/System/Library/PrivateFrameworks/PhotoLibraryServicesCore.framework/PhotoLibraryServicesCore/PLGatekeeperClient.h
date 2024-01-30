@class PLAssetsdClient;

@interface PLGatekeeperClient : NSObject {
    PLAssetsdClient *_assetsdClient;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)getLibrarySizes:(id /* block */)a0;
- (void)getLibrarySizesFromDB:(BOOL)a0 handler:(id /* block */)a1;

@end
