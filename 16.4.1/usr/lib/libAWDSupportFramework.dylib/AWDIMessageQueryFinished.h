@class NSString;

@interface AWDIMessageQueryFinished : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char connectionType : 1; unsigned char genericError : 1; unsigned char isEmail : 1; unsigned char isPhoneNumber : 1; unsigned char pOSIXError : 1; unsigned char queryDuration : 1; unsigned char resultCode : 1; unsigned char success : 1; unsigned char uRLError : 1; unsigned char wasReversePushAttempted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) unsigned int success;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) BOOL hasQueryDuration;
@property (nonatomic) unsigned int queryDuration;
@property (nonatomic) BOOL hasIsPhoneNumber;
@property (nonatomic) unsigned int isPhoneNumber;
@property (nonatomic) BOOL hasIsEmail;
@property (nonatomic) unsigned int isEmail;
@property (nonatomic) BOOL hasResultCode;
@property (nonatomic) int resultCode;
@property (nonatomic) BOOL hasGenericError;
@property (nonatomic) int genericError;
@property (nonatomic) BOOL hasURLError;
@property (nonatomic) int uRLError;
@property (nonatomic) BOOL hasPOSIXError;
@property (nonatomic) int pOSIXError;
@property (nonatomic) BOOL hasWasReversePushAttempted;
@property (nonatomic) unsigned int wasReversePushAttempted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
