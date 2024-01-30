@class NSData;

@interface AWDNFCCardIngestionSessionStateChangeEvent : PBCodable <NSCopying> {
    struct { unsigned char timeDeltaFromReference : 1; unsigned char timestamp : 1; unsigned char cardValidationStatus : 1; unsigned char sPID : 1; unsigned char sessionStatus : 1; unsigned char spStatusCode : 1; unsigned char state : 1; unsigned char technology : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasUuidReference;
@property (retain, nonatomic) NSData *uuidReference;
@property (nonatomic) BOOL hasTimeDeltaFromReference;
@property (nonatomic) unsigned long long timeDeltaFromReference;
@property (nonatomic) BOOL hasState;
@property (nonatomic) unsigned int state;
@property (nonatomic) BOOL hasTechnology;
@property (nonatomic) unsigned int technology;
@property (nonatomic) BOOL hasSpStatusCode;
@property (nonatomic) unsigned int spStatusCode;
@property (nonatomic) BOOL hasCardValidationStatus;
@property (nonatomic) unsigned int cardValidationStatus;
@property (nonatomic) BOOL hasSessionStatus;
@property (nonatomic) unsigned int sessionStatus;
@property (nonatomic) BOOL hasSPID;
@property (nonatomic) unsigned int sPID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
