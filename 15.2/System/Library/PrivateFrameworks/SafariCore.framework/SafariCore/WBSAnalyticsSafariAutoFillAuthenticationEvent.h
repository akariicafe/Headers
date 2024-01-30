@class NSString;

@interface WBSAnalyticsSafariAutoFillAuthenticationEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char category : 1; unsigned char client : 1; unsigned char status : 1; unsigned char onPageLoad : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) int category;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasClient;
@property (nonatomic) int client;
@property (nonatomic) BOOL hasOnPageLoad;
@property (nonatomic) BOOL onPageLoad;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) BOOL hasErrorCode;
@property (retain, nonatomic) NSString *errorCode;

- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)categoryAsString:(int)a0;
- (int)StringAsCategory:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)clientAsString:(int)a0;
- (int)StringAsClient:(id)a0;

@end
