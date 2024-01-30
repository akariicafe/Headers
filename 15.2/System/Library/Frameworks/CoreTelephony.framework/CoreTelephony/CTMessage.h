@class NSUUID, NSString, NSDate, CTXPCServiceSubscriptionContext, CTPhoneNumber, NSMutableDictionary, NSDictionary, NSMutableArray, NSObject;
@protocol CTMessageAddress, NSCopying;

@interface CTMessage : NSObject {
    NSMutableDictionary *_contentTypeParams;
}

@property (readonly) NSMutableArray *recipients;
@property (readonly) NSDate *date;
@property (readonly) NSMutableArray *items;
@property (readonly) NSDictionary *rawHeaders;
@property (readonly) unsigned int replaceMessage;
@property (nonatomic) unsigned int messageId;
@property (nonatomic) int messageType;
@property (copy, nonatomic) CTPhoneNumber *serviceCenter;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSObject<CTMessageAddress, NSCopying> *sender;
@property (copy, nonatomic) NSString *contentType;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSUUID *uniqueIdentifier;
@property (nonatomic) BOOL bypassSupportedMessageModesCheck;
@property (copy, nonatomic) CTXPCServiceSubscriptionContext *context;
@property (readonly, nonatomic) BOOL replyEnabled;
@property (nonatomic) int smsType;

- (id)addText:(id)a0;
- (id)addPart:(id)a0;
- (void)setRecipient:(id)a0;
- (void)setRawHeaders:(id)a0;
- (void)addPhoneRecipient:(id)a0;
- (void)addEmailRecipient:(id)a0;
- (void)setReplaceMessage:(unsigned int)a0;
- (void)addContentTypeParameterWithName:(id)a0 value:(id)a1;
- (void)removePartAtIndex:(unsigned long long)a0;
- (void)removeRecipient:(id)a0;
- (void)setReplyEnabled:(BOOL)a0;
- (void)removeRecipientsInArray:(id)a0;
- (id)addData:(id)a0 withContentType:(id)a1;
- (id)initWithDate:(id)a0;
- (id)contentTypeParameterWithName:(id)a0;
- (id)allContentTypeParameterNames;
- (void)setCountryCode:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)setRecipients:(id)a0;
- (void)addRecipient:(id)a0;

@end
