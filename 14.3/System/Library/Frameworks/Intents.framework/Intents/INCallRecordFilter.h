@class NSString, NSArray;

@interface INCallRecordFilter : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long preferredCallProvider;
@property (readonly, copy, nonatomic) NSArray *participants;
@property (readonly, nonatomic) unsigned long long callTypes;
@property (readonly, nonatomic) long long callCapability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParticipants:(id)a0 callTypes:(unsigned long long)a1 callCapability:(long long)a2;
- (id)initWithParticipants:(id)a0 callTypes:(unsigned long long)a1 callCapability:(long long)a2 preferredCallProvider:(long long)a3;
- (BOOL)isEqual:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
