@interface AppStoreKit.ArtworkItemProvider : NSItemProvider {
    void /* unknown type, empty encoding */ artworkLoader;
    void /* unknown type, empty encoding */ artworkLoaderConfig;
}

- (id)loadDataRepresentationForTypeIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0 typeIdentifier:(id)a1;

@end
