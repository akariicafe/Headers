@class PBDataReader, NSString, GEORPTimestamp, GEORPFeedbackLogEventDetails, PBUnknownFields;

@interface GEORPFeedbackLogEventParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_clientEventUuid;
    GEORPTimestamp *_createdAt;
    GEORPFeedbackLogEventDetails *_details;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _type;
    struct { unsigned char has_type : 1; unsigned char read_unknownFields : 1; unsigned char read_clientEventUuid : 1; unsigned char read_createdAt : 1; unsigned char read_details : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasClientEventUuid;
@property (retain, nonatomic) NSString *clientEventUuid;
@property (readonly, nonatomic) BOOL hasCreatedAt;
@property (retain, nonatomic) GEORPTimestamp *createdAt;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasDetails;
@property (retain, nonatomic) GEORPFeedbackLogEventDetails *details;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
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
- (int)StringAsType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)typeAsString:(int)a0;

@end
