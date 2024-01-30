@class NSArray, INSpeakableString, NSString;

@interface INHomeFilter : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *entityIdentifiers;
@property (readonly, copy, nonatomic) INSpeakableString *entityName;
@property (readonly, nonatomic) long long entityType;
@property (readonly, nonatomic) long long outerDeviceType;
@property (readonly, copy, nonatomic) INSpeakableString *outerDeviceName;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, copy, nonatomic) INSpeakableString *home;
@property (readonly, copy, nonatomic) INSpeakableString *zone;
@property (readonly, copy, nonatomic) INSpeakableString *group;
@property (readonly, copy, nonatomic) INSpeakableString *room;
@property (readonly, nonatomic) BOOL isExcludeFilter;
@property (readonly, copy, nonatomic) INSpeakableString *scene;
@property (readonly, copy, nonatomic) INSpeakableString *accessory;
@property (readonly, copy, nonatomic) INSpeakableString *service;
@property (readonly, nonatomic) long long serviceType;
@property (readonly, nonatomic) long long subServiceType;
@property (readonly, nonatomic) BOOL hasAllQuantifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)initWithEntityIdentifiers:(id)a0 entityName:(id)a1 entityType:(long long)a2 outerDeviceType:(long long)a3 outerDeviceName:(id)a4 deviceType:(long long)a5 home:(id)a6 zone:(id)a7 group:(id)a8 room:(id)a9 isExcludeFilter:(BOOL)a10 hasAllQuantifier:(BOOL)a11;
- (id)initWithEntityIdentifiers:(id)a0 home:(id)a1 scene:(id)a2 homeZone:(id)a3 group:(id)a4 room:(id)a5 accessory:(id)a6 service:(id)a7 entityType:(long long)a8 serviceType:(long long)a9 subServiceType:(long long)a10;
- (id)initWithEntityIdentifiers:(id)a0 home:(id)a1 scene:(id)a2 homeZone:(id)a3 group:(id)a4 room:(id)a5 accessory:(id)a6 entityType:(long long)a7 serviceType:(long long)a8 subServiceType:(long long)a9 isExcludeFilter:(BOOL)a10 entityName:(id)a11;
- (id)initWithEntityIdentifiers:(id)a0 entityName:(id)a1 entityType:(long long)a2 outerDeviceType:(long long)a3 outerDeviceName:(id)a4 deviceType:(long long)a5 home:(id)a6 zone:(id)a7 group:(id)a8 room:(id)a9 isExcludeFilter:(BOOL)a10;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)initWithEntityIdentifiers:(id)a0 home:(id)a1 scene:(id)a2 homeZone:(id)a3 group:(id)a4 room:(id)a5 accessory:(id)a6 service:(id)a7 entityType:(long long)a8 serviceType:(long long)a9 subServiceType:(long long)a10 isExcludeFilter:(BOOL)a11;
- (void).cxx_destruct;
- (id)initWithEntityIdentifiers:(id)a0 entityName:(id)a1 entityType:(long long)a2 outerDeviceType:(long long)a3 innerDeviceName:(id)a4 innerDeviceType:(long long)a5 home:(id)a6 zone:(id)a7 group:(id)a8 room:(id)a9 isExcludeFilter:(BOOL)a10;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
