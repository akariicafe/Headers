@interface AppStoreKitInternal.URLActivityItemProvider : UIActivityItemProvider <UIActivityItemLinkPresentationSource, UIActivityItemSubjectSource> {
    void /* unknown type, empty encoding */ artworkLoader;
    void /* unknown type, empty encoding */ shareSheetData;
    void /* unknown type, empty encoding */ excludedActivityTypes;
}

@property (nonatomic, readonly) id item;

- (id)activityViewControllerLinkPresentationMetadata:(id)a0;
- (id)activityViewControllerSubject:(id)a0;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)initWithPlaceholderItem:(id)a0;

@end
