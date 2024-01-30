@class NSArray, NSString;

@interface CKReviewLargeAttachmentsViewController : CKAbstractReviewViewController <QLPreviewControllerDelegate>

@property (retain, nonatomic) NSArray *attachments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)tableViewCellReuseIdentifier;
- (Class)tableViewCellClass;
- (void)reloadModelData;
- (unsigned long long)numberOfModelObjects;
- (id)modelObjectAtIndex:(unsigned long long)a0;
- (void)deleteModelObjectAndUnderlyingData:(id)a0;
- (void)didSelectModelObjectAtIndex:(unsigned long long)a0;
- (void)_populateAttachmentData;
- (id)_previewItem;
- (id)attachmentClass;
- (id)navigationBarTitle;
- (void)previewControllerDidDismiss:(id)a0;

@end
