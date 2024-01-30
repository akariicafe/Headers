@class NSString, MFMessage, NSArray, MailAccount, NSDictionary, MFDeliveryResult, DeliveryAccount, MFPlainTextDocument, MFMutableMessageHeaders;

@interface MFMailDelivery : NSObject {
    id _delegate;
    MFMessage *_message;
    MailAccount *_archiveAccount;
    DeliveryAccount *_account;
    MFDeliveryResult *_result;
    MFMutableMessageHeaders *_headers;
    NSArray *_mixedContent;
    BOOL _textPartsAreHTML;
    NSString *_htmlString;
    MFPlainTextDocument *_plainTextAlternative;
    NSArray *_otherStringsAndAttachments;
    NSArray *_charsets;
    unsigned char _threaded : 1;
    unsigned char _useCellDataOnly : 1;
}

@property (retain, nonatomic) NSDictionary *compositionSpecification;
@property (nonatomic) unsigned long long conversationFlags;
@property (nonatomic) BOOL isUserRequested;

+ (id)newWithMessage:(id)a0;
+ (id)newWithHeaders:(id)a0 mixedContent:(id)a1 textPartsAreHTML:(BOOL)a2;
+ (BOOL)deliverMessage:(id)a0;
+ (id)newWithHeaders:(id)a0 HTML:(id)a1 plainTextAlternative:(id)a2 other:(id)a3 charsets:(id)a4;

- (void)archive;
- (id)init;
- (void)setAccount:(id)a0;
- (void)dealloc;
- (id)account;
- (id)newMessageWriter;
- (id)deliverSynchronously;
- (id)initWithHeaders:(id)a0 mixedContent:(id)a1 textPartsAreHTML:(BOOL)a2;
- (id)message;
- (id)initWithMessage:(id)a0;
- (id)originalHeaders;
- (id)headersForDelivery;
- (id)deliverMessageData:(id)a0 toRecipients:(id)a1;
- (id)archiveAccount;
- (void)setArchiveAccount:(id)a0;
- (long long)deliveryStatus;
- (id)deliveryResult;
- (void)deliverAsynchronously;
- (void)setCellDataOnly:(BOOL)a0;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (id)initWithHeaders:(id)a0 HTML:(id)a1 plainTextAlternative:(id)a2 other:(id)a3 charsets:(id)a4;
- (BOOL)shouldSignMessage;
- (BOOL)shouldEncryptMessage;

@end
