@interface MFComposeTypeFactory : NSObject

+ (unsigned long long)imageScaleFromUserDefaults;
+ (id)_markupStringForExcludedInlineAttachmentWithFilename:(id)a0;
+ (void)_setContent:(id)a0 includeAttachments:(BOOL)a1 shouldQuote:(BOOL)a2 prependBlankLine:(BOOL)a3 delegate:(id)a4 storeOriginalAttachments:(BOOL)a5;
+ (id)_markupForInlineAttachment:(id)a0 willBeIncluded:(BOOL)a1 prependBlankLine:(BOOL)a2 delegate:(id)a3;
+ (void)_prependQuotedMarkup:(id)a0 shouldIndent:(BOOL)a1 toBodyField:(id)a2;
+ (id)headersFromDelegate:(id)a0 originatingBundleID:(id)a1 sourceAccountManagement:(int)a2;
+ (void)_mergeModel:(id)a0 withDelegate:(id)a1;
+ (void)_updateDelegate:(id)a0 toRecipients:(id)a1 ccRecipients:(id)a2 bccRecipients:(id)a3;
+ (void)_quoteFromModel:(id)a0 delegate:(id)a1;
+ (void)_sanitizeRecipientsForComposeType:(unsigned long long)a0 sendingAddress:(id)a1 delegate:(id)a2;
+ (void)_setupForReplyWithModel:(id)a0 delegate:(id)a1;
+ (void)setupSwitchToReplyAllWithModel:(id)a0 delegate:(id)a1;
+ (void)_setContent:(id)a0 includeAttachments:(BOOL)a1 shouldQuote:(BOOL)a2 prependBlankLine:(BOOL)a3 delegate:(id)a4;
+ (void)_setupForReplyAllWithModel:(id)a0 delegate:(id)a1;
+ (void)_setupForForwardWithModel:(id)a0 delegate:(id)a1;
+ (void)_setupForNewMessageWithModel:(id)a0 delegate:(id)a1;
+ (id)messageFromDelegate:(id)a0 withSubstituteDOMDocument:(id)a1 compositionSpecification:(id)a2 originatingBundleID:(id)a3 sourceAccountManagement:(int)a4 writeAttachmentPlaceholders:(BOOL)a5;
+ (id)headersFromDelegate:(id)a0;
+ (BOOL)alwaysBCCSelf;
+ (id)bccSelfAddressForDelegate:(id)a0;
+ (void)setupSwitchToReplyWithModel:(id)a0 delegate:(id)a1;
+ (void)addAttachment:(id)a0 prepend:(BOOL)a1 withCompositionModel:(id)a2 delegate:(id)a3;
+ (void)setupWithCompositionModel:(id)a0 delegate:(id)a1;
+ (void)setupWithContent:(id)a0 delegate:(id)a1;
+ (id)messageFromDelegate:(id)a0 originatingBundleID:(id)a1 sourceAccountManagement:(int)a2;
+ (void)hijackThreadFromDelegate:(id)a0;
+ (id)subjectFromSubject:(id)a0 withComposeType:(long long)a1;

@end
