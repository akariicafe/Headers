@class MFPlainTextDocument, NSArray, ECHTMLStringAndMIMECharset, MFQuotedAttachmentsInfo;

@interface MFHTMLDataObject : NSObject

@property (readonly, nonatomic) ECHTMLStringAndMIMECharset *htmlString;
@property (readonly, nonatomic) NSArray *otherHTMLStringsAndAttachments;
@property (readonly, nonatomic) MFPlainTextDocument *plainTextAlternative;
@property (readonly, nonatomic) MFQuotedAttachmentsInfo *quotedAttachmentsInfo;

- (void).cxx_destruct;
- (id)initWithHTMLString:(id)a0 otherHTMLStringsAndAttachments:(id)a1 plainTextAlternative:(id)a2 quotedAttachmentsInfo:(id)a3;

@end
