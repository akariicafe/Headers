@class GEOPBTransitArtwork, PBDataReader, GEOFormattedString, NSMutableArray, PBUnknownFields;

@interface GEOAdvisoryNotice : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _incidentIndexs;
    NSMutableArray *_advisoryCards;
    NSMutableArray *_advisoryItems;
    NSMutableArray *_analyticsMessageValues;
    GEOFormattedString *_detailCardTitle;
    GEOPBTransitArtwork *_noticeArtwork;
    GEOFormattedString *_noticeText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _shouldAlwaysShowAdvisoryCard;
    struct { unsigned char has_shouldAlwaysShowAdvisoryCard : 1; unsigned char read_unknownFields : 1; unsigned char read_incidentIndexs : 1; unsigned char read_advisoryCards : 1; unsigned char read_advisoryItems : 1; unsigned char read_analyticsMessageValues : 1; unsigned char read_detailCardTitle : 1; unsigned char read_noticeArtwork : 1; unsigned char read_noticeText : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasNoticeText;
@property (retain, nonatomic) GEOFormattedString *noticeText;
@property (readonly, nonatomic) unsigned long long incidentIndexsCount;
@property (readonly, nonatomic) unsigned int *incidentIndexs;
@property (retain, nonatomic) NSMutableArray *advisoryCards;
@property (retain, nonatomic) NSMutableArray *advisoryItems;
@property (nonatomic) BOOL hasShouldAlwaysShowAdvisoryCard;
@property (nonatomic) BOOL shouldAlwaysShowAdvisoryCard;
@property (readonly, nonatomic) BOOL hasDetailCardTitle;
@property (retain, nonatomic) GEOFormattedString *detailCardTitle;
@property (readonly, nonatomic) BOOL hasNoticeArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *noticeArtwork;
@property (retain, nonatomic) NSMutableArray *analyticsMessageValues;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)advisoryCardType;
+ (Class)advisoryItemType;
+ (Class)analyticsMessageValueType;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
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
- (void)addAdvisoryCard:(id)a0;
- (void)addAdvisoryItem:(id)a0;
- (void)addAnalyticsMessageValue:(id)a0;
- (void)addIncidentIndex:(unsigned int)a0;
- (id)advisoryCardAtIndex:(unsigned long long)a0;
- (unsigned long long)advisoryCardsCount;
- (id)advisoryItemAtIndex:(unsigned long long)a0;
- (unsigned long long)advisoryItemsCount;
- (id)analyticsMessageValueAtIndex:(unsigned long long)a0;
- (unsigned long long)analyticsMessageValuesCount;
- (void)clearAdvisoryCards;
- (void)clearAdvisoryItems;
- (void)clearAnalyticsMessageValues;
- (void)clearIncidentIndexs;
- (unsigned int)incidentIndexAtIndex:(unsigned long long)a0;
- (void)setIncidentIndexs:(unsigned int *)a0 count:(unsigned long long)a1;

@end
