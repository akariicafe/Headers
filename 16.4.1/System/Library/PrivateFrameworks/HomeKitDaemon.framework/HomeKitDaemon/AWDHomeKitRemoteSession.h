@interface AWDHomeKitRemoteSession : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char timestamp : 1; unsigned char closeReason : 1; unsigned char deviceType : 1; unsigned char errorCode : 1; unsigned char role : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDeviceType;
@property (nonatomic) unsigned int deviceType;
@property (nonatomic) BOOL hasRole;
@property (nonatomic) unsigned int role;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) BOOL hasCloseReason;
@property (nonatomic) unsigned int closeReason;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
