@class INSpeakableString, NSString, NSArray;

@interface INHomeEntity : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) INSpeakableString *entityName;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *entityIdentifier;
@property (readonly, copy, nonatomic) NSArray *deviceTypes;
@property (readonly, nonatomic) long long sceneType;
@property (readonly, copy, nonatomic) INSpeakableString *room;
@property (readonly, copy, nonatomic) INSpeakableString *zone;
@property (readonly, copy, nonatomic) INSpeakableString *home;
@property (readonly, copy, nonatomic) INSpeakableString *group;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *zones;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEntityName:(id)a0 type:(long long)a1 entityIdentifier:(id)a2 deviceTypes:(id)a3 sceneType:(long long)a4 room:(id)a5 home:(id)a6 group:(id)a7 zones:(id)a8;
- (id)initWithEntityName:(id)a0 type:(long long)a1 entityIdentifier:(id)a2 deviceTypes:(id)a3 sceneType:(long long)a4 room:(id)a5 zone:(id)a6 home:(id)a7 group:(id)a8;
- (id)initWithName:(id)a0 type:(long long)a1 deviceType:(long long)a2;

@end
