@class NSString, GEORPTdmFraudRequestInfo, GEORPRapProfileInfo, PBDataReader, PBUnknownFields, NSMutableArray, GEORPThirdPartyPhotoSharingPreferenceUpdateResult, GEORPPhotoAttributionPreferencesUpdateResult;

@interface GEORPFeedbackSubmissionResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_feedbackId;
    NSMutableArray *_imageIdMapEntrys;
    GEORPPhotoAttributionPreferencesUpdateResult *_photoAttributionPreferencesUpdateResult;
    GEORPRapProfileInfo *_rapInfo;
    GEORPTdmFraudRequestInfo *_tdmFraudRequestInfo;
    GEORPThirdPartyPhotoSharingPreferenceUpdateResult *_thirdPartyPhotoSharingPreferenceUpdateResult;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_feedbackId : 1; unsigned char read_imageIdMapEntrys : 1; unsigned char read_photoAttributionPreferencesUpdateResult : 1; unsigned char read_rapInfo : 1; unsigned char read_tdmFraudRequestInfo : 1; unsigned char read_thirdPartyPhotoSharingPreferenceUpdateResult : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasFeedbackId;
@property (retain, nonatomic) NSString *feedbackId;
@property (retain, nonatomic) NSMutableArray *imageIdMapEntrys;
@property (readonly, nonatomic) BOOL hasRapInfo;
@property (retain, nonatomic) GEORPRapProfileInfo *rapInfo;
@property (readonly, nonatomic) BOOL hasThirdPartyPhotoSharingPreferenceUpdateResult;
@property (retain, nonatomic) GEORPThirdPartyPhotoSharingPreferenceUpdateResult *thirdPartyPhotoSharingPreferenceUpdateResult;
@property (readonly, nonatomic) BOOL hasPhotoAttributionPreferencesUpdateResult;
@property (retain, nonatomic) GEORPPhotoAttributionPreferencesUpdateResult *photoAttributionPreferencesUpdateResult;
@property (readonly, nonatomic) BOOL hasTdmFraudRequestInfo;
@property (retain, nonatomic) GEORPTdmFraudRequestInfo *tdmFraudRequestInfo;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)imageIdMapEntryType;

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
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (void)addImageIdMapEntry:(id)a0;
- (void)clearImageIdMapEntrys;
- (id)imageIdMapEntryAtIndex:(unsigned long long)a0;
- (unsigned long long)imageIdMapEntrysCount;

@end
