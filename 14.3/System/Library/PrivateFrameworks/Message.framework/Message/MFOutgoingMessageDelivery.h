@class MFMailMessage, ECHTMLStringAndMIMECharset, NSArray, MFAttachmentCompositionContext, MFMailDelivery, MFPlainTextDocument, NSDictionary, MailAccount, DeliveryAccount, MFMutableMessageHeaders;
@protocol MFDeliveryDelegate;

@interface MFOutgoingMessageDelivery : NSObject {
    MFMailMessage *_message;
    MFMutableMessageHeaders *_headers;
    NSArray *_mixedContent;
    BOOL _textPartsAreHTML;
    ECHTMLStringAndMIMECharset *_htmlBody;
    MFPlainTextDocument *_plainTextAlternative;
    NSArray *_otherHTMLAndAttachments;
    MailAccount *_archiveAccount;
    DeliveryAccount *_deliveryAccount;
    MFMailDelivery *_currentDeliveryObject;
}

@property (weak, nonatomic) id<MFDeliveryDelegate> delegate;
@property (retain, nonatomic) MFAttachmentCompositionContext *attachmentContext;
@property (retain, nonatomic) NSDictionary *compositionSpecification;
@property (nonatomic) unsigned long long conversationFlags;
@property (retain, nonatomic) MFMailMessage *originalMessage;
@property (nonatomic) long long originalConversationId;
@property (nonatomic) BOOL isUserRequested;
@property (nonatomic) long long action;
@property (nonatomic) BOOL shouldSign;
@property (nonatomic) BOOL shouldEncrypt;

+ (id)newWithMessage:(id)a0;
+ (id)newWithHeaders:(id)a0 mixedContent:(id)a1 textPartsAreHTML:(BOOL)a2;
+ (id)newWithHeaders:(id)a0 HTML:(id)a1 plainTextAlternative:(id)a2 other:(id)a3;

- (id)init;
- (void).cxx_destruct;
- (void)setAccount:(id)a0;
- (id)account;
- (id)initWithHeaders:(id)a0 mixedContent:(id)a1 textPartsAreHTML:(BOOL)a2;
- (id)initWithHeaders:(id)a0 HTML:(id)a1 plainTextAlternative:(id)a2 other:(id)a3;
- (id)deliverSynchronouslyWithCompletion:(id /* block */)a0;
- (id)message;
- (id)initWithMessage:(id)a0;
- (id)originalHeaders;
- (void)setArchiveAccount:(id)a0;
- (long long)deliveryStatus;
- (id)originalMessageObjectID;
- (id)_currentDeliveryObject;
- (id)_deliverSynchronouslyWithCurrentSettings:(BOOL)a0;
- (id)_deliveryAccountForInitializers;

@end
