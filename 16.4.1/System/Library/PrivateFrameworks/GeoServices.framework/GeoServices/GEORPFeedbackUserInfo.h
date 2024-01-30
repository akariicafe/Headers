@class GEORPTdmInfo, NSString, GEORPUserCredentials, NSData, PBDataReader, GEORPAppAttestInfo, PBUnknownFields;

@interface GEORPFeedbackUserInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAppAttestInfo *_anonUserInfo;
    NSData *_devicePushToken;
    NSString *_preferredEmail;
    GEORPAppAttestInfo *_rolloverInfo;
    GEORPTdmInfo *_tdmUserInfo;
    NSString *_ugcUserId;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_anonUserInfo : 1; unsigned char read_devicePushToken : 1; unsigned char read_preferredEmail : 1; unsigned char read_rolloverInfo : 1; unsigned char read_tdmUserInfo : 1; unsigned char read_ugcUserId : 1; unsigned char read_userCredentials : 1; unsigned char read_userEmail : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasUserCredentials;
@property (retain, nonatomic) GEORPUserCredentials *userCredentials;
@property (readonly, nonatomic) BOOL hasDevicePushToken;
@property (retain, nonatomic) NSData *devicePushToken;
@property (readonly, nonatomic) BOOL hasUserEmail;
@property (retain, nonatomic) NSString *userEmail;
@property (readonly, nonatomic) BOOL hasPreferredEmail;
@property (retain, nonatomic) NSString *preferredEmail;
@property (readonly, nonatomic) BOOL hasUgcUserId;
@property (retain, nonatomic) NSString *ugcUserId;
@property (readonly, nonatomic) BOOL hasAnonUserInfo;
@property (retain, nonatomic) GEORPAppAttestInfo *anonUserInfo;
@property (readonly, nonatomic) BOOL hasRolloverInfo;
@property (retain, nonatomic) GEORPAppAttestInfo *rolloverInfo;
@property (readonly, nonatomic) BOOL hasTdmUserInfo;
@property (retain, nonatomic) GEORPTdmInfo *tdmUserInfo;
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
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;

@end
