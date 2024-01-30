@class NSString;

@interface AWDHomeKitEventTriggerUserConfirmationReceiverSession : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char userResponseDelay : 1; unsigned char resultErrorCode : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasSessionID;
@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic) BOOL hasResultErrorCode;
@property (nonatomic) int resultErrorCode;
@property (nonatomic) BOOL hasUserResponseDelay;
@property (nonatomic) unsigned long long userResponseDelay;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
