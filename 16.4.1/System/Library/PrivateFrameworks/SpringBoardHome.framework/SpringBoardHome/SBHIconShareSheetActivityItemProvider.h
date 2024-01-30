@class NSString, NSURL, UIImage, LSiTunesMetadata;

@interface SBHIconShareSheetActivityItemProvider : UIActivityItemProvider

@property (retain, nonatomic) LSiTunesMetadata *iTunesMetadata;
@property (retain, nonatomic) NSString *itemName;
@property (retain, nonatomic) NSURL *itemURL;
@property (retain, nonatomic) UIImage *itemImage;

- (id)item;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewController:(id)a0 thumbnailImageForActivityType:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)initWithIconManager:(id)a0 icon:(id)a1;

@end
