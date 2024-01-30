@class NSURL, NSString, NSItemProvider;

@interface VUIShareURLActivityItem : NSObject <UIActivityItemSource, UIActivityItemLinkPresentationSource> {
    NSItemProvider *_itemProvider;
    NSString *_title;
    NSString *_subtitle;
    NSURL *_imageURL;
}

@property (readonly, nonatomic) NSURL *shareURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)activityViewControllerLinkPresentationMetadata:(id)a0;
- (id)initWithURL:(id)a0 title:(id)a1 subtitle:(id)a2 imageURL:(id)a3;

@end
