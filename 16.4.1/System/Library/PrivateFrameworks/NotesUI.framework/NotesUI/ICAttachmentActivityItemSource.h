@class NSString, ICAttachment;

@interface ICAttachmentActivityItemSource : NSObject <UIActivityItemSourceAttachment, UIActivityItemSource>

@property (weak, nonatomic) ICAttachment *attachment;
@property (readonly, copy, nonatomic) NSString *attachmentTypeUTI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)initWithAttachment:(id)a0;
- (id)activityViewController:(id)a0 attachmentNameForActivityType:(id)a1;

@end
