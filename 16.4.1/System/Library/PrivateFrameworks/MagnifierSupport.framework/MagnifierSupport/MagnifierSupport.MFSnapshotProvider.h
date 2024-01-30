@interface MagnifierSupport.MFSnapshotProvider : UIActivityItemProvider {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ image;
}

@property (nonatomic, readonly) id item;

- (void).cxx_destruct;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (id)initWithPlaceholderItem:(id)a0;

@end
