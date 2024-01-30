@class INMessageLinkMetadata, NSString, NSDate, INCurrencyAmount, NSArray, INSpeakableString, INFile, INImage, INPerson, NSNumber;

@interface INMessage : NSObject <INCacheableContainer, INImageProxyInjecting, INKeyImageProducing, INEnumerable, INMessageExport, NSCopying, NSSecureCoding>

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
@property (readonly, copy, nonatomic) INFile *audioMessageFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)_intents_cacheableObjects;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (long long)_compareSubProducerOne:(id)a0 subProducerTwo:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_intents_updateContainerWithCache:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_intents_enumerateObjectsOfClass:(Class)a0 withBlock:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 content:(id)a1 dateSent:(id)a2 sender:(id)a3 recipients:(id)a4;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 dateMessageWasLastRead:(id)a6 numberOfAttachments:(id)a7 messageType:(long long)a8 messageEffectType:(long long)a9;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 groupName:(id)a6 dateMessageWasLastRead:(id)a7 numberOfAttachments:(id)a8 messageType:(long long)a9 messageEffectType:(long long)a10;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 groupName:(id)a6 dateMessageWasLastRead:(id)a7 numberOfAttachments:(id)a8 messageType:(long long)a9 messageEffectType:(long long)a10 referencedMessage:(id)a11;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 groupName:(id)a6 dateMessageWasLastRead:(id)a7 numberOfAttachments:(id)a8 messageType:(long long)a9 messageEffectType:(long long)a10 referencedMessage:(id)a11 serviceName:(id)a12;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 groupName:(id)a6 dateMessageWasLastRead:(id)a7 numberOfAttachments:(id)a8 messageType:(long long)a9 messageEffectType:(long long)a10 referencedMessage:(id)a11 serviceName:(id)a12 audioMessageFile:(id)a13;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 groupName:(id)a6 messageType:(long long)a7;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 groupName:(id)a6 messageType:(long long)a7 serviceName:(id)a8;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 groupName:(id)a6 messageType:(long long)a7 serviceName:(id)a8 audioMessageFile:(id)a9;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 messageType:(long long)a6;

@end
