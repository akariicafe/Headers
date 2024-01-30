@interface AWDHomeKitRelaySession : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char actionType : 1; unsigned char duration : 1; unsigned char errorCode : 1; unsigned char statusCode : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;
@property (nonatomic) BOOL hasActionType;
@property (nonatomic) int actionType;

- (id)actionTypeAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsActionType:(id)a0;

@end
