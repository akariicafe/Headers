@class NSString, NSTextAttachment;

@interface _UITextAttachmentInteractionHandler : NSObject <_UITextItemInteractionHandler> {
    NSTextAttachment *_textAttachment;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_image;
- (void)_copyImage;
- (void)_saveToCameraRoll;
- (id)contextMenuConfiguration;
- (id)defaultActionWithContextMenuInteraction:(id)a0;
- (id)initWithTextAttachment:(id)a0;

@end
