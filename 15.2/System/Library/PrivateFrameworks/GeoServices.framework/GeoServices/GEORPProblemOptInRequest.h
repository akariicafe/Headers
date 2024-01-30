@class NSString, GEORPUserCredentials, NSData, PBDataReader;

@interface GEORPProblemOptInRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    NSData *_devicePushToken;
    NSString *_problemId;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _didOptIn;
    struct { unsigned char has_didOptIn : 1; unsigned char read_devicePushToken : 1; unsigned char read_problemId : 1; unsigned char read_userCredentials : 1; unsigned char read_userEmail : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasProblemId;
@property (retain, nonatomic) NSString *problemId;
@property (nonatomic) BOOL hasDidOptIn;
@property (nonatomic) BOOL didOptIn;
@property (readonly, nonatomic) BOOL hasUserCredentials;
@property (retain, nonatomic) GEORPUserCredentials *userCredentials;
@property (readonly, nonatomic) BOOL hasDevicePushToken;
@property (retain, nonatomic) NSData *devicePushToken;
@property (readonly, nonatomic) BOOL hasUserEmail;
@property (retain, nonatomic) NSString *userEmail;

+ (BOOL)isValid:(id)a0;

- (unsigned int)requestTypeCode;
- (void)readAll:(BOOL)a0;
- (Class)responseClass;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithSubmissionID:(id)a0 allowContactBackAtEmailAddress:(id)a1 traits:(id)a2;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
