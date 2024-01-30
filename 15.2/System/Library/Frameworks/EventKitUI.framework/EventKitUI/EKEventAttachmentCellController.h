@class EKEventAttachmentCell, NSString, EKAttachment;
@protocol EKEventAttachmentCellControllerDelegate;

@interface EKEventAttachmentCellController : NSObject <QLPreviewControllerDelegate> {
    id _downloadID;
    BOOL _sourceIsManaged;
}

@property (readonly) EKEventAttachmentCell *cell;
@property (retain, nonatomic) EKAttachment *attachment;
@property (weak, nonatomic) id<EKEventAttachmentCellControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellControllersForAttachments:(id)a0 givenExistingControllers:(id)a1 sourceIsManaged:(BOOL)a2;
+ (id)_okLocalizedString;
+ (id)_attachmentDownloadErrorLocalizedString;
+ (id)_keyForAttachment:(id)a0;
+ (id)_cannotOpenAttachmentLocalizedString;
+ (BOOL)_attachmentIsViewable:(id)a0;

- (void)tearDown;
- (id)event;
- (void)previewControllerWillDismiss:(id)a0;
- (void).cxx_destruct;
- (id)attachmentFilename;
- (void)cellSelected;
- (id)initWithAttachment:(id)a0 sourceIsManaged:(BOOL)a1;
- (void)_clearDownloadID;
- (void)_presentPreviewWithURL:(id)a0 filename:(id)a1;
- (unsigned long long)supportedInterfaceOrientationMaskForInterfaceOrientation:(long long)a0;
- (void)_openExternalAttachmentURLInBrowser:(id)a0;
- (void)startAttachmentDownload;
- (void)promptToDownloadAttachment;
- (id)_downloadProgressStringWithDownloadedBytes:(id)a0 outOfTotalBytes:(id)a1;
- (void)_presentPreviewAttachmentInPreviewWithInfo:(id)a0;

@end
