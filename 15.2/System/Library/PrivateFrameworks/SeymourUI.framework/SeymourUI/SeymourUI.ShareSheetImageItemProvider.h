@interface SeymourUI.ShareSheetImageItemProvider : UIActivityItemProvider {
    void /* unknown type, empty encoding */ artworkItemProvider;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ loadedImage;
    void /* unknown type, empty encoding */ timeout;
}

@property (nonatomic, readonly) id item;

- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (void).cxx_destruct;
- (id)initWithPlaceholderItem:(id)a0;

@end
