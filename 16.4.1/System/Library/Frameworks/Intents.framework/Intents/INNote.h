@class NSString, NSArray, NSDateComponents, INSpeakableString;

@interface INNote : NSObject <INImageProxyInjecting, INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic, setter=_setContents:) NSArray *contents;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, copy, nonatomic) INSpeakableString *title;
@property (readonly, copy, nonatomic) INSpeakableString *groupName;
@property (readonly, copy, nonatomic) NSDateComponents *createdDateComponents;
@property (readonly, copy, nonatomic) NSDateComponents *modifiedDateComponents;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)_intents_cacheableObjects;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_intents_updateContainerWithCache:(id)a0;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 contents:(id)a1 groupName:(id)a2 createdDateComponents:(id)a3 modifiedDateComponents:(id)a4 identifier:(id)a5;
- (id)initWithTitle:(id)a0 contents:(id)a1 groupName:(id)a2 createdDateComponents:(id)a3 modifiedDateComponents:(id)a4 identifier:(id)a5 accountIdentifier:(id)a6;

@end
