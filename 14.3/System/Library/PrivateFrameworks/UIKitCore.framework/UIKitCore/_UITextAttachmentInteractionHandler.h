@class NSString, NSTextAttachment;

@interface _UITextAttachmentInteractionHandler : NSObject <_UITextItemInteractionHandler> {
    NSTextAttachment *_textAttachment;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_image;
- (void).cxx_destruct;
- (void)_copyImage;
- (id)defaultAction;
- (id)contextMenuConfiguration;
- (id)initWithTextAttachment:(id)a0;
- (void)_saveToCameraRoll;

@end
