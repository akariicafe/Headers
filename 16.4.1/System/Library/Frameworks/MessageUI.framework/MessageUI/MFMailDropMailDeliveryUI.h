@class NSString, MFPlaceholderMessageRewriter;

@interface MFMailDropMailDeliveryUI : MFMailDropMailDelivery <MFMessageRewriterPlaceholderResolver> {
    MFPlaceholderMessageRewriter *_rewriter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)deliverSynchronouslyWithCompletion:(id /* block */)a0;
- (id)scaledImages:(id)a0;
- (BOOL)updateMessageWithAttachmentsSynchronously;
- (id)_contentForAttachmentPassingTest:(id /* block */)a0;
- (id)_headersByAddingMailDropHeaders:(id)a0;
- (id)_mailDropAttachmentHTMLStringForAttachment:(id)a0;
- (id)_mailDropBannerHTMLString;
- (id)_scaleImages:(id)a0 toFit:(unsigned long long)a1 resultingSize:(out unsigned long long *)a2;
- (id)contentForContentID:(id)a0;
- (id)contentForPlaceholder:(id)a0;
- (id)contentForURL:(id)a0;

@end
