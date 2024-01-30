@class NSArray, NSString, _INPBString, _INPBIntentMetadata;

@interface _INPBMoveFileIntent : PBCodable <_INPBMoveFileIntent, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _entityTypes;
    struct { unsigned char destinationType : 1; unsigned char sourceType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBString *destinationName;
@property (readonly, nonatomic) BOOL hasDestinationName;
@property (nonatomic) int destinationType;
@property (nonatomic) BOOL hasDestinationType;
@property (copy, nonatomic) NSArray *entityNames;
@property (readonly, nonatomic) unsigned long long entityNamesCount;
@property (readonly, nonatomic) int *entityTypes;
@property (readonly, nonatomic) unsigned long long entityTypesCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (copy, nonatomic) NSArray *properties;
@property (readonly, nonatomic) unsigned long long propertiesCount;
@property (retain, nonatomic) _INPBString *sourceName;
@property (readonly, nonatomic) BOOL hasSourceName;
@property (nonatomic) int sourceType;
@property (nonatomic) BOOL hasSourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)propertiesType;
+ (Class)entityNameType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)addProperties:(id)a0;
- (BOOL)readFrom:(id)a0;
- (int)StringAsDestinationType:(id)a0;
- (void)clearProperties;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)propertiesAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)destinationTypeAsString:(int)a0;
- (void)clearEntityTypes;
- (void)addEntityType:(int)a0;
- (int)entityTypeAtIndex:(unsigned long long)a0;
- (void)setEntityTypes:(int *)a0 count:(unsigned long long)a1;
- (id)entityTypesAsString:(int)a0;
- (int)StringAsEntityTypes:(id)a0;
- (id)sourceTypeAsString:(int)a0;
- (int)StringAsSourceType:(id)a0;
- (void)addEntityName:(id)a0;
- (void)clearEntityNames;
- (id)entityNameAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
