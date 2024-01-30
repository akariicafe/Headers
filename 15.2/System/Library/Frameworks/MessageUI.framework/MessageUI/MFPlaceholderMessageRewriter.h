@class NSString, NSMutableArray, MFOutgoingMessageContent;
@protocol MFMessageRewriterPlaceholderResolver;

@interface MFPlaceholderMessageRewriter : NSObject <MFComposeTypeFactoryDelegate> {
    NSMutableArray *_placeholders;
    MFOutgoingMessageContent *_rewrittenMessageContent;
}

@property (readonly, nonatomic) MFOutgoingMessageContent *originalMessageContent;
@property (weak, nonatomic) id<MFMessageRewriterPlaceholderResolver> placeholderResolver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_deriveOutgoingMessageContentFromLibraryMessageContent:(id)a0;

- (id)toRecipients;
- (id)composeWebView;
- (id)attachments;
- (void).cxx_destruct;
- (id)bccRecipients;
- (void)setToRecipients:(id)a0;
- (id)init;
- (id)subject;
- (void)setSubject:(id)a0;
- (id)ccRecipients;
- (void)setCcRecipients:(id)a0;
- (void)setBccRecipients:(id)a0;
- (id)savedHeaders;
- (id)sendingEmailAddress;
- (id)accountProxyGenerator;
- (void)setSendingEmailAddress:(id)a0;
- (void)setSavedHeaders:(id)a0;
- (id)shouldCreateRichTextRepresentation;
- (id)sendingAccountProxy;
- (id)rewrittenMessageContent;
- (id)initWithOriginalMessageContent:(id)a0 resolver:(id)a1;

@end
