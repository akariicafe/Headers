@class LPLinkMetadata, NSArray, NSString, LPFileMetadata, CNContactFormatter;

@interface CNShareContactActivityItem : NSObject <UIActivityItemSource, UIActivityItemSourceAttachment, UIActivityItemLinkPresentationSource>

@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (retain, nonatomic) LPFileMetadata *fileMetadata;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (nonatomic) BOOL canShareMeCardOnlySharingProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)thumbnailImage;
- (id)displayString;
- (id)initWithContact:(id)a0;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewController:(id)a0 thumbnailImageForActivityType:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)activityViewController:(id)a0 attachmentNameForActivityType:(id)a1;
- (id)activityViewControllerLinkPresentationMetadata:(id)a0;
- (id)initWithContacts:(id)a0 inGroupNamed:(id)a1;

@end
