@class LPFileMetadata, LPLinkMetadata, CNContact, NSString;

@interface CNShareContactActivityItem : NSObject <UIActivityItemSource, UIActivityItemSourceAttachment, UIActivityItemLinkPresentationSource>

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (retain, nonatomic) LPFileMetadata *fileMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (id)thumbnailImage;
- (id)activityViewController:(id)a0 thumbnailImageForActivityType:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)activityViewControllerLinkPresentationMetadata:(id)a0;
- (id)activityViewController:(id)a0 attachmentNameForActivityType:(id)a1;

@end
