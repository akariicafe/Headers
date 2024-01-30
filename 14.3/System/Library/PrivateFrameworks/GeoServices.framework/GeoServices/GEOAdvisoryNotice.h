@class GEOAdvisoryCard, PBDataReader, GEOFormattedString, PBUnknownFields;

@interface GEOAdvisoryNotice : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _incidentIndexs;
    GEOAdvisoryCard *_advisoryCard;
    GEOFormattedString *_noticeText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _shouldAlwaysShowAdvisoryCard;
    struct { unsigned char has_shouldAlwaysShowAdvisoryCard : 1; unsigned char read_unknownFields : 1; unsigned char read_incidentIndexs : 1; unsigned char read_advisoryCard : 1; unsigned char read_noticeText : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasNoticeText;
@property (retain, nonatomic) GEOFormattedString *noticeText;
@property (readonly, nonatomic) unsigned long long incidentIndexsCount;
@property (readonly, nonatomic) unsigned int *incidentIndexs;
@property (readonly, nonatomic) BOOL hasAdvisoryCard;
@property (retain, nonatomic) GEOAdvisoryCard *advisoryCard;
@property (nonatomic) BOOL hasShouldAlwaysShowAdvisoryCard;
@property (nonatomic) BOOL shouldAlwaysShowAdvisoryCard;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addIncidentIndex:(unsigned int)a0;
- (void)clearIncidentIndexs;
- (void)setIncidentIndexs:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (unsigned int)incidentIndexAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
