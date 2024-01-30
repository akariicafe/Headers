@class NSString, NSTextAttachment;

@interface _UITextAttachmentInteractionHandler : NSObject <_UITextItemInteractionHandler> {
    NSTextAttachment *_textAttachment;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_image;
- (void)_copyImage;
- (id)defaultActionWithContextMenuInteraction:(id)a0;
- (void).cxx_destruct;
- (id)contextMenuConfiguration;
- (void)_saveToCameraRoll;
- (id)initWithTextAttachment:(id)a0;

@end
