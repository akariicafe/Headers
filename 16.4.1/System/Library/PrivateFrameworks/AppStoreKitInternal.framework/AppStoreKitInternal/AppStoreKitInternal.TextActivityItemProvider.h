@interface AppStoreKitInternal.TextActivityItemProvider : UIActivityItemProvider {
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ excludedActivityTypes;
}

@property (nonatomic, readonly) id item;

- (void).cxx_destruct;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)initWithPlaceholderItem:(id)a0;

@end
