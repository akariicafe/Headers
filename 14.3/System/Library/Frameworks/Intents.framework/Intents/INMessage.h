@class INMessageLinkMetadata, NSString, NSDate, INCurrencyAmount, NSArray, INSpeakableString, INImage, INPerson, NSNumber;

@interface INMessage : NSObject <INCacheableContainer, INImageProxyInjecting, INKeyImageProducing, INMessageExport, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) INImage *_keyImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDate *dateMessageWasLastRead;
@property (readonly, copy, nonatomic) NSNumber *numberOfAttachments;
@property (readonly, nonatomic) long long messageEffectType;
@property (readonly, copy, nonatomic) INMessage *referencedMessage;
@property (copy, nonatomic) INMessageLinkMetadata *linkMetadata;
@property (copy, nonatomic) INCurrencyAmount *paymentAmount;
@property (copy, nonatomic) NSString *locationName;
@property (copy, nonatomic) NSString *fileExtension;
@property (copy, nonatomic) INPerson *sender;
@property (copy, nonatomic) NSArray *recipients;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *conversationIdentifier;
@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, copy, nonatomic) NSDate *dateSent;
@property (readonly, copy, nonatomic) INSpeakableString *groupName;
@property (readonly, nonatomic) long long messageType;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 groupName:(id)a6 dateMessageWasLastRead:(id)a7 numberOfAttachments:(id)a8 messageType:(long long)a9 messageEffectType:(long long)a10 referencedMessage:(id)a11 serviceName:(id)a12;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 groupName:(id)a6 dateMessageWasLastRead:(id)a7 numberOfAttachments:(id)a8 messageType:(long long)a9 messageEffectType:(long long)a10;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 groupName:(id)a6 dateMessageWasLastRead:(id)a7 numberOfAttachments:(id)a8 messageType:(long long)a9 messageEffectType:(long long)a10 referencedMessage:(id)a11;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 groupName:(id)a6 messageType:(long long)a7 serviceName:(id)a8;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 dateMessageWasLastRead:(id)a6 numberOfAttachments:(id)a7 messageType:(long long)a8 messageEffectType:(long long)a9;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (long long)_compareSubProducerOne:(id)a0 subProducerTwo:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 groupName:(id)a6 messageType:(long long)a7;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 messageType:(long long)a6;
- (id)initWithIdentifier:(id)a0 content:(id)a1 dateSent:(id)a2 sender:(id)a3 recipients:(id)a4;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
