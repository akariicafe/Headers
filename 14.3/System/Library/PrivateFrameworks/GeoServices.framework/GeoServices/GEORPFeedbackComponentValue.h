@class PBDataReader, GEORPFeedbackOverview, GEORPPoiEnrichment, GEORPFeedbackNotification, GEORPFeedbackConversation, PBUnknownFields;

@interface GEORPFeedbackComponentValue : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPFeedbackConversation *_conversation;
    GEORPFeedbackNotification *_notification;
    GEORPFeedbackOverview *_overview;
    GEORPPoiEnrichment *_poiEnrichment;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_conversation : 1; unsigned char read_notification : 1; unsigned char read_overview : 1; unsigned char read_poiEnrichment : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasNotification;
@property (retain, nonatomic) GEORPFeedbackNotification *notification;
@property (readonly, nonatomic) BOOL hasOverview;
@property (retain, nonatomic) GEORPFeedbackOverview *overview;
@property (readonly, nonatomic) BOOL hasConversation;
@property (retain, nonatomic) GEORPFeedbackConversation *conversation;
@property (readonly, nonatomic) BOOL hasPoiEnrichment;
@property (retain, nonatomic) GEORPPoiEnrichment *poiEnrichment;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
