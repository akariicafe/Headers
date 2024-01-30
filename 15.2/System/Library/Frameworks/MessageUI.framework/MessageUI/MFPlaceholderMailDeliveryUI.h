@class NSString, MFPlaceholderMessageRewriter;

@interface MFPlaceholderMailDeliveryUI : MFOutgoingMessageDelivery <MFMessageRewriterPlaceholderResolver> {
    NSString *_contextID;
    MFPlaceholderMessageRewriter *_rewriter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)deliverSynchronouslyWithCompletion:(id /* block */)a0;
- (id)contentForURL:(id)a0;
- (id)contentForContentID:(id)a0;
- (id)contentForPlaceholder:(id)a0;
- (id)_attachmentsContextID;

@end
