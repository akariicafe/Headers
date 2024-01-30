@class NSString, NSData, NSMutableArray, HDCodableUserDomainConceptTypeIdentifier;

@interface HDCodableUserDomainConcept : PBCodable <NSCopying> {
    struct { unsigned char creationDate : 1; unsigned char modificationDate : 1; unsigned char majorVersion : 1; unsigned char minorVersion : 1; unsigned char patchVersion : 1; unsigned char deleted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) HDCodableUserDomainConceptTypeIdentifier *identifier;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) BOOL hasModificationDate;
@property (nonatomic) double modificationDate;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL deleted;
@property (readonly, nonatomic) BOOL hasBuild;
@property (retain, nonatomic) NSString *build;
@property (nonatomic) BOOL hasMajorVersion;
@property (nonatomic) int majorVersion;
@property (nonatomic) BOOL hasMinorVersion;
@property (nonatomic) int minorVersion;
@property (nonatomic) BOOL hasPatchVersion;
@property (nonatomic) int patchVersion;
@property (retain, nonatomic) NSMutableArray *codings;
@property (retain, nonatomic) NSMutableArray *links;
@property (retain, nonatomic) NSMutableArray *properties;
@property (readonly, nonatomic) BOOL hasTypeData;
@property (retain, nonatomic) NSData *typeData;

+ (Class)propertiesType;
+ (Class)codingsType;
+ (Class)linksType;

- (void)addProperties:(id)a0;
- (unsigned long long)propertiesCount;
- (void)clearProperties;
- (BOOL)readFrom:(id)a0;
- (id)propertiesAtIndex:(unsigned long long)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addLinks:(id)a0;
- (void)addCodings:(id)a0;
- (unsigned long long)codingsCount;
- (void)clearCodings;
- (id)codingsAtIndex:(unsigned long long)a0;
- (unsigned long long)linksCount;
- (void)clearLinks;
- (id)linksAtIndex:(unsigned long long)a0;

@end
