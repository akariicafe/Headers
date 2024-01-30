@class NSString, PBUnknownFields;

@interface GEOAbAssignInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_abAssignId;
    unsigned long long _createdAtTimestamp;
    unsigned long long _relativeTimestamp;
    struct { unsigned char has_createdAtTimestamp : 1; unsigned char has_relativeTimestamp : 1; } _flags;
}

@property (nonatomic) BOOL hasCreatedAtTimestamp;
@property (nonatomic) unsigned long long createdAtTimestamp;
@property (readonly, nonatomic) BOOL hasAbAssignId;
@property (retain, nonatomic) NSString *abAssignId;
@property (nonatomic) BOOL hasRelativeTimestamp;
@property (nonatomic) unsigned long long relativeTimestamp;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
