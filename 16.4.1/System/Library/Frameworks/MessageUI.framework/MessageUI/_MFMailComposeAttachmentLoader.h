@class MFMailMessage;

@interface _MFMailComposeAttachmentLoader : NSObject {
    MFMailMessage *_message;
    id _content;
    BOOL _isDraft;
    BOOL _didLoadBestAlternative;
    id /* block */ _completionBlock;
}

- (void).cxx_destruct;
- (void)loadAttachments;
- (id)initWithMessage:(id)a0 content:(id)a1 isDraft:(BOOL)a2 didLoadBestAlternative:(BOOL)a3 completion:(id /* block */)a4;

@end
