@class GEORPThirdPartyPhotoSharingPreference, GEORPRapInfo, PBDataReader, GEORPPhotoAttributionPreferences, GEORPFeedbackConversation, PBUnknownFields, GEORPFeedbackOverview, GEORPPoiEnrichment, GEORPFeedbackNotification;

@interface GEORPFeedbackComponentValue : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPFeedbackConversation *_conversation;
    GEORPFeedbackNotification *_notification;
    GEORPFeedbackOverview *_overview;
    GEORPPhotoAttributionPreferences *_photoAttributionPreferences;
    GEORPPoiEnrichment *_poiEnrichment;
    GEORPRapInfo *_rapInfo;
    GEORPThirdPartyPhotoSharingPreference *_thirdPartyPhotoSharingPreferences;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_conversation : 1; unsigned char read_notification : 1; unsigned char read_overview : 1; unsigned char read_photoAttributionPreferences : 1; unsigned char read_poiEnrichment : 1; unsigned char read_rapInfo : 1; unsigned char read_thirdPartyPhotoSharingPreferences : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasNotification;
@property (retain, nonatomic) GEORPFeedbackNotification *notification;
@property (readonly, nonatomic) BOOL hasOverview;
@property (retain, nonatomic) GEORPFeedbackOverview *overview;
@property (readonly, nonatomic) BOOL hasConversation;
@property (retain, nonatomic) GEORPFeedbackConversation *conversation;
@property (readonly, nonatomic) BOOL hasPoiEnrichment;
@property (retain, nonatomic) GEORPPoiEnrichment *poiEnrichment;
@property (readonly, nonatomic) BOOL hasRapInfo;
@property (retain, nonatomic) GEORPRapInfo *rapInfo;
@property (readonly, nonatomic) BOOL hasThirdPartyPhotoSharingPreferences;
@property (retain, nonatomic) GEORPThirdPartyPhotoSharingPreference *thirdPartyPhotoSharingPreferences;
@property (readonly, nonatomic) BOOL hasPhotoAttributionPreferences;
@property (retain, nonatomic) GEORPPhotoAttributionPreferences *photoAttributionPreferences;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
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

@end
