@class NSString;

@interface PPM2DatabaseCheckViolationCount : PBCodable <NSCopying> {
    struct { unsigned char pragmaCheckType : 1; unsigned char schemaVersion : 1; } _has;
}

@property (nonatomic) BOOL hasSchemaVersion;
@property (nonatomic) unsigned int schemaVersion;
@property (nonatomic) BOOL hasPragmaCheckType;
@property (nonatomic) int pragmaCheckType;
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)pragmaCheckTypeAsString:(int)a0;
- (int)StringAsPragmaCheckType:(id)a0;

@end
