@interface HealthExperienceUI.HealthURLActivityItemProvider : UIActivityItemProvider {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ thumbnailImage;
    void /* unknown type, empty encoding */ summary;
}

@property (nonatomic, readonly) id item;

- (void).cxx_destruct;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (id)initWithPlaceholderItem:(id)a0;

@end
