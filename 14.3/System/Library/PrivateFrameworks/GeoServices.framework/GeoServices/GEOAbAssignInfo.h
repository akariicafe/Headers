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

- (id)initWithJSON:(id)a0;
- (void)refreshRelativeTimeStampWithEventTime:(double)a0;
- (void)refreshRelativeTimeStamp;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithAbAssignId:(id)a0 createdAtDate:(id)a1;

@end
