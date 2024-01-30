@class NSString, INContactEventTrigger, INSpatialEventTrigger, INTemporalEventTrigger, INSpeakableString, NSDateComponents;

@interface INTask : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) INContactEventTrigger *contactEventTrigger;
@property (readonly, nonatomic) long long taskReference;
@property (readonly, copy, nonatomic) NSString *parentIdentifier;
@property (readonly, copy, nonatomic) INSpeakableString *title;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) INSpatialEventTrigger *spatialEventTrigger;
@property (readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
@property (readonly, copy, nonatomic) NSDateComponents *createdDateComponents;
@property (readonly, copy, nonatomic) NSDateComponents *modifiedDateComponents;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long taskType;
@property (readonly, nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)initWithTitle:(id)a0 status:(long long)a1 taskType:(long long)a2 spatialEventTrigger:(id)a3 temporalEventTrigger:(id)a4 createdDateComponents:(id)a5 modifiedDateComponents:(id)a6 identifier:(id)a7 contactEventTrigger:(id)a8 taskReference:(long long)a9;
- (id)initWithTitle:(id)a0 status:(long long)a1 taskType:(long long)a2 spatialEventTrigger:(id)a3 temporalEventTrigger:(id)a4 createdDateComponents:(id)a5 modifiedDateComponents:(id)a6 identifier:(id)a7 priority:(long long)a8 contactEventTrigger:(id)a9 taskReference:(long long)a10 parentIdentifier:(id)a11;
- (id)initWithTitle:(id)a0 status:(long long)a1 taskType:(long long)a2 spatialEventTrigger:(id)a3 temporalEventTrigger:(id)a4 createdDateComponents:(id)a5 modifiedDateComponents:(id)a6 identifier:(id)a7 priority:(long long)a8;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 status:(long long)a1 taskType:(long long)a2 spatialEventTrigger:(id)a3 temporalEventTrigger:(id)a4 createdDateComponents:(id)a5 modifiedDateComponents:(id)a6 identifier:(id)a7;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
