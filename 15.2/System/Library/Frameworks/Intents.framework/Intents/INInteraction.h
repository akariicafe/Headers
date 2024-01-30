@class NSDate, SAUISnippet, NSString, INIntentResponse, NSUUID, NSDateInterval, INImage, INIntent, CSSearchableItem;

@interface INInteraction : NSObject <INEnumerable, INInteractionExport, INImageProxyInjecting, INKeyImageProducing, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *domainIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long intentHandlingStatus;
@property (retain, nonatomic, setter=_setSnippet:) SAUISnippet *_snippet;
@property (nonatomic, setter=_setDonatedBySiri:) BOOL _donatedBySiri;
@property (copy, nonatomic, setter=_setIntent:) INIntent *intent;
@property (copy, nonatomic, setter=_setIntentResponse:) INIntentResponse *intentResponse;
@property (readonly, copy) CSSearchableItem *_searchableItem;
@property (readonly) long long _indexingHash;
@property (copy, nonatomic, setter=_setContextExtensionUUID:) NSUUID *_contextExtensionUUID;
@property (nonatomic) long long direction;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) INImage *_keyImage;

+ (void)initialize;
+ (void)deleteAllInteractionsWithCompletion:(id /* block */)a0;
+ (void)deleteInteractionsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
+ (void)deleteInteractionsWithGroupIdentifier:(id)a0 completion:(id /* block */)a1;
+ (unsigned long long)_searchableItemVersion;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)_dictionaryRepresentation;
- (long long)_compareSubProducerOne:(id)a0 subProducerTwo:(id)a1;
- (id)parameterValueForParameter:(id)a0;
- (void)donateInteractionWithCompletion:(id /* block */)a0;
- (void)_donateInteractionWithBundleId:(id)a0 completion:(id /* block */)a1;
- (id)_searchableItemIncludingData:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithIntent:(id)a0 response:(id)a1;
- (BOOL)_intents_enumerateObjectsOfClass:(Class)a0 withBlock:(id /* block */)a1;
- (void)_commonInit;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithIntent:(id)a0 response:(id)a1;

@end
