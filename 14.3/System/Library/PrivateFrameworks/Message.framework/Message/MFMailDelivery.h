@class MFMailMessage, ECHTMLStringAndMIMECharset, NSArray, MailAccount, NSDictionary, MFDeliveryResult, EMMessageObjectID, DeliveryAccount, MFMutableMessageHeaders, MFPlainTextDocument;

@interface MFMailDelivery : NSObject {
    id _delegate;
    MFMailMessage *_message;
    MailAccount *_archiveAccount;
    DeliveryAccount *_account;
    MFDeliveryResult *_result;
    MFMutableMessageHeaders *_headers;
    NSArray *_mixedContent;
    BOOL _textPartsAreHTML;
    ECHTMLStringAndMIMECharset *_htmlString;
    MFPlainTextDocument *_plainTextAlternative;
    NSArray *_otherStringsAndAttachments;
    unsigned char _threaded : 1;
    unsigned char _useCellDataOnly : 1;
}

@property (retain, nonatomic) NSDictionary *compositionSpecification;
@property (nonatomic) unsigned long long conversationFlags;
@property (nonatomic) BOOL isUserRequested;
@property (retain, nonatomic) EMMessageObjectID *originalMessageObjectID;
@property (retain, nonatomic) MFMailMessage *originalMessage;
@property (nonatomic) long long action;
@property (nonatomic) BOOL shouldSign;
@property (nonatomic) BOOL shouldEncrypt;
@property (weak, nonatomic) id delegate;

+ (id)newWithMessage:(id)a0;
+ (id)newWithHeaders:(id)a0 mixedContent:(id)a1 textPartsAreHTML:(BOOL)a2;
+ (id)newWithHeaders:(id)a0 HTML:(id)a1 plainTextAlternative:(id)a2 other:(id)a3;
+ (BOOL)deliverMessage:(id)a0;

- (void)archive;
- (id)init;
- (void).cxx_destruct;
- (void)setAccount:(id)a0;
- (void)dealloc;
- (id)account;
- (id)newMessageWriter;
- (id)deliverSynchronously;
- (id)initWithHeaders:(id)a0 mixedContent:(id)a1 textPartsAreHTML:(BOOL)a2;
- (id)initWithHeaders:(id)a0 HTML:(id)a1 plainTextAlternative:(id)a2 other:(id)a3;
- (id)message;
- (id)initWithMessage:(id)a0;
- (void)updateOriginalMessageFromHeaders:(id)a0;
- (id)originalHeaders;
- (id)headersForDelivery;
- (id)deliverMessageData:(id)a0 toRecipients:(id)a1;
- (id)archiveAccount;
- (void)setArchiveAccount:(id)a0;
- (long long)deliveryStatus;
- (id)deliveryResult;
- (void)deliverAsynchronously;
- (void)setCellDataOnly:(BOOL)a0;

@end
