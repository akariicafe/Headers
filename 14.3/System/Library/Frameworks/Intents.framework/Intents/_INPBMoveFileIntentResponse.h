@class NSArray, NSString, _INPBString;

@interface _INPBMoveFileIntentResponse : PBCodable <_INPBMoveFileIntentResponse, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _entityTypes;
    struct { unsigned char overwrite : 1; unsigned char success : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBString *destinationName;
@property (readonly, nonatomic) BOOL hasDestinationName;
@property (copy, nonatomic) NSArray *entityNames;
@property (readonly, nonatomic) unsigned long long entityNamesCount;
@property (readonly, nonatomic) int *entityTypes;
@property (readonly, nonatomic) unsigned long long entityTypesCount;
@property (nonatomic) BOOL overwrite;
@property (nonatomic) BOOL hasOverwrite;
@property (retain, nonatomic) _INPBString *sourceName;
@property (readonly, nonatomic) BOOL hasSourceName;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL hasSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)entityNameType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearEntityTypes;
- (void)addEntityType:(int)a0;
- (int)entityTypeAtIndex:(unsigned long long)a0;
- (void)setEntityTypes:(int *)a0 count:(unsigned long long)a1;
- (id)entityTypesAsString:(int)a0;
- (int)StringAsEntityTypes:(id)a0;
- (void)addEntityName:(id)a0;
- (void)clearEntityNames;
- (id)entityNameAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
