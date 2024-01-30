@class NSDictionary;

@interface MFMessageWriter : NSObject {
    Class _messageClassToInstantiate;
    unsigned char _allows8BitMimeParts : 1;
    unsigned char _allowsBinaryMimeParts : 1;
    unsigned char _writeSizeDispositionParameter : 1;
    unsigned char _allowsQuotedPrintable : 1;
}

@property (nonatomic) id delegate;
@property (readonly, nonatomic) NSDictionary *compositionSpecification;
@property (nonatomic) BOOL shouldWriteAttachmentPlaceholders;

- (id)init;
- (void)dealloc;
- (void)setAllowsQuotedPrintable:(BOOL)a0;
- (void)appendDataForMimePart:(id)a0 toData:(id)a1 withPartData:(id)a2;
- (id)initWithCompositionSpecification:(id)a0;
- (id)createMessageWithPlainTextDocumentsAndAttachments:(id)a0 headers:(id)a1;
- (id)createMessageWithString:(id)a0 headers:(id)a1;
- (id)createMessageWithHtmlString:(id)a0 plainTextAlternative:(id)a1 otherHtmlStringsAndAttachments:(id)a2 headers:(id)a3;
- (id)createMessageWithHtmlString:(id)a0 attachments:(id)a1 headers:(id)a2;
- (BOOL)allows8BitMimeParts;
- (void)setAllows8BitMimeParts:(BOOL)a0;
- (BOOL)allowsBinaryMimeParts;
- (void)setAllowsBinaryMimeParts:(BOOL)a0;
- (BOOL)allowsQuotedPrintable;
- (void)setWriteSizeDispositionParameter:(BOOL)a0;
- (void)setMessageClassToInstantiate:(Class)a0;
- (id)createMessageWithHtmlString:(id)a0 plainTextAlternative:(id)a1 otherHtmlStringsAndAttachments:(id)a2 charsets:(id)a3 headers:(id)a4;

@end
