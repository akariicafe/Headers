@class NSString, GEOTrafficTrafficIncidentsMetaData, PBDataReader;

@interface GEOTrafficResponseMetaData : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_codeVersion;
    NSString *_dataVersion;
    NSString *_hspVersion;
    GEOTrafficTrafficIncidentsMetaData *_incidentsMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_codeVersion : 1; unsigned char read_dataVersion : 1; unsigned char read_hspVersion : 1; unsigned char read_incidentsMetadata : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCodeVersion;
@property (retain, nonatomic) NSString *codeVersion;
@property (readonly, nonatomic) BOOL hasDataVersion;
@property (retain, nonatomic) NSString *dataVersion;
@property (readonly, nonatomic) BOOL hasHspVersion;
@property (retain, nonatomic) NSString *hspVersion;
@property (readonly, nonatomic) BOOL hasIncidentsMetadata;
@property (retain, nonatomic) GEOTrafficTrafficIncidentsMetaData *incidentsMetadata;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
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
