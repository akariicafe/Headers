@interface AppStoreKitInternal.ArtworkActivityItemProvider : UIActivityItemProvider {
    void /* unknown type, empty encoding */ artwork;
    void /* unknown type, empty encoding */ artworkLoader;
    void /* unknown type, empty encoding */ artworkConfig;
    void /* unknown type, empty encoding */ imageBox;
    void /* unknown type, empty encoding */ excludedActivityTypes;
}

@property (nonatomic, readonly) id item;

- (void).cxx_destruct;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)initWithPlaceholderItem:(id)a0;

@end
