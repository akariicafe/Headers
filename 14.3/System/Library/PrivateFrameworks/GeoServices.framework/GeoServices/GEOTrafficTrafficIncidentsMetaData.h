@class NSString;

@interface GEOTrafficTrafficIncidentsMetaData : PBCodable <NSCopying> {
    NSString *_archiveId;
    unsigned long long _archiveTime;
    struct { unsigned char has_archiveTime : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasArchiveId;
@property (retain, nonatomic) NSString *archiveId;
@property (nonatomic) BOOL hasArchiveTime;
@property (nonatomic) unsigned long long archiveTime;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
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
- (id)initWithDictionary:(id)a0;

@end
