@interface AWDHomeKitRemoteLogin : PBCodable <NSCopying> {
    struct { unsigned char delay : 1; unsigned char timestamp : 1; unsigned char loginType : 1; unsigned char requester : 1; unsigned char resultErrorCode : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasLoginType;
@property (nonatomic) int loginType;
@property (nonatomic) BOOL hasResultErrorCode;
@property (nonatomic) int resultErrorCode;
@property (nonatomic) BOOL hasDelay;
@property (nonatomic) unsigned long long delay;
@property (nonatomic) BOOL hasRequester;
@property (nonatomic) int requester;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)requesterAsString:(int)a0;
- (int)StringAsRequester:(id)a0;
- (id)loginTypeAsString:(int)a0;
- (int)StringAsLoginType:(id)a0;

@end
