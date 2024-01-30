@class NSArray, NSString, _INPBString, _INPBIntentMetadata;

@interface _INPBCopyFileIntent : PBCodable <_INPBCopyFileIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char destinationType : 1; unsigned char entityType : 1; unsigned char sourceType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBString *destinationName;
@property (readonly, nonatomic) BOOL hasDestinationName;
@property (nonatomic) int destinationType;
@property (nonatomic) BOOL hasDestinationType;
@property (retain, nonatomic) _INPBString *entityName;
@property (readonly, nonatomic) BOOL hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) BOOL hasEntityType;
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

- (void)encodeWithCoder:(id)a0;
- (void)addProperties:(id)a0;
- (void)clearProperties;
- (BOOL)readFrom:(id)a0;
- (id)propertiesAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)sourceTypeAsString:(int)a0;
- (int)StringAsSourceType:(id)a0;
- (id)entityTypeAsString:(int)a0;
- (int)StringAsEntityType:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)destinationTypeAsString:(int)a0;
- (int)StringAsDestinationType:(id)a0;
- (id)dictionaryRepresentation;

@end
