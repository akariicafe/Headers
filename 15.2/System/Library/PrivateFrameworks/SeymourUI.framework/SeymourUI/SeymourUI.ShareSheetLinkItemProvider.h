@interface SeymourUI.ShareSheetLinkItemProvider : UIActivityItemProvider {
    void /* unknown type, empty encoding */ storefrontLocalizer;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ artworkItemProvider;
    void /* unknown type, empty encoding */ title;
}

@property (nonatomic, readonly) id item;

- (void).cxx_destruct;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (id)initWithPlaceholderItem:(id)a0;

@end
