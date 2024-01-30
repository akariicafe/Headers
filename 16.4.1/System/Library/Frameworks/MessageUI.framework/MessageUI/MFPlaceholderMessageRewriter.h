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

- (void)setSubject:(id)a0;
- (id)subject;
- (id)attachments;
- (id)ccRecipients;
- (id)toRecipients;
- (id)composeWebView;
- (id)bccRecipients;
- (id)init;
- (void).cxx_destruct;
- (void)setToRecipients:(id)a0;
- (id)accountProxyGenerator;
- (id)initWithOriginalMessageContent:(id)a0 resolver:(id)a1;
- (id)rewrittenMessageContent;
- (id)savedHeaders;
- (id)sendingAccountProxy;
- (id)sendingEmailAddress;
- (void)setBccRecipients:(id)a0;
- (void)setCcRecipients:(id)a0;
- (void)setSavedHeaders:(id)a0;
- (void)setSendingEmailAddress:(id)a0;
- (id)shouldCreateRichTextRepresentation;

@end
