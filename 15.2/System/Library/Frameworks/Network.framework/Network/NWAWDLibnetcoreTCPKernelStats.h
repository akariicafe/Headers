@interface NWAWDLibnetcoreTCPKernelStats : PBCodable <NSCopying> {
    struct { unsigned char numTfoBlackholed : 1; unsigned char numTfoCookieInvalid : 1; unsigned char numTfoCookieRcv : 1; unsigned char numTfoCookieReq : 1; unsigned char numTfoCookieReqRcv : 1; unsigned char numTfoCookieSent : 1; unsigned char numTfoFallback : 1; unsigned char numTfoSynDataAcked : 1; unsigned char numTfoSynDataRcv : 1; unsigned char numTfoSynDataSent : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasNumTfoCookieReq;
@property (nonatomic) unsigned long long numTfoCookieReq;
@property (nonatomic) BOOL hasNumTfoCookieRcv;
@property (nonatomic) unsigned long long numTfoCookieRcv;
@property (nonatomic) BOOL hasNumTfoFallback;
@property (nonatomic) unsigned long long numTfoFallback;
@property (nonatomic) BOOL hasNumTfoSynDataSent;
@property (nonatomic) unsigned long long numTfoSynDataSent;
@property (nonatomic) BOOL hasNumTfoSynDataAcked;
@property (nonatomic) unsigned long long numTfoSynDataAcked;
@property (nonatomic) BOOL hasNumTfoSynDataRcv;
@property (nonatomic) unsigned long long numTfoSynDataRcv;
@property (nonatomic) BOOL hasNumTfoCookieReqRcv;
@property (nonatomic) unsigned long long numTfoCookieReqRcv;
@property (nonatomic) BOOL hasNumTfoCookieSent;
@property (nonatomic) unsigned long long numTfoCookieSent;
@property (nonatomic) BOOL hasNumTfoCookieInvalid;
@property (nonatomic) unsigned long long numTfoCookieInvalid;
@property (nonatomic) BOOL hasNumTfoBlackholed;
@property (nonatomic) unsigned long long numTfoBlackholed;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
