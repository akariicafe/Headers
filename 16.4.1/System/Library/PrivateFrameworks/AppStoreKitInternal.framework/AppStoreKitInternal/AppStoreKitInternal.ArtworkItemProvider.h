@interface AppStoreKitInternal.ArtworkItemProvider : NSItemProvider {
    void /* unknown type, empty encoding */ artworkLoader;
    void /* unknown type, empty encoding */ artworkLoaderConfig;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0 typeIdentifier:(id)a1;
- (id)loadDataRepresentationForTypeIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
