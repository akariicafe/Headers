@class NSString, PBDataReader, PBUnknownFields;

@interface GEODirectionsRequestFeedback : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_appIdentifier;
    NSString *_requestingAppId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _purpose;
    int _source;
    struct { unsigned char has_purpose : 1; unsigned char has_source : 1; unsigned char read_unknownFields : 1; unsigned char read_appIdentifier : 1; unsigned char read_requestingAppId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasPurpose;
@property (nonatomic) int purpose;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;
@property (readonly, nonatomic) BOOL hasAppIdentifier;
@property (retain, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) BOOL hasRequestingAppId;
@property (retain, nonatomic) NSString *requestingAppId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (int)StringAsSource:(id)a0;
- (id)initWithData:(id)a0;
- (id)sourceAsString:(int)a0;
- (id)initWithPurpose:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (int)StringAsPurpose:(id)a0;
- (id)initWithPurpose:(int)a0 andSource:(int)a1;
- (id)initWithPurpose:(int)a0 andSource:(int)a1 andIdentifier:(id)a2;
- (id)purposeAsString:(int)a0;

@end
