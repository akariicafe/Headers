@class NSString;

@interface ICFilterAttachmentActivityItemSource : NSObject <UIActivityItemSourceAttachment, UIActivityItemSource>

@property (retain, nonatomic) id attachmentItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)activityViewController:(id)a0 attachmentNameForActivityType:(id)a1;
- (id)activityItemSourceForSelector:(SEL)a0;
- (id)initAttachmentItem:(id)a0;

@end
