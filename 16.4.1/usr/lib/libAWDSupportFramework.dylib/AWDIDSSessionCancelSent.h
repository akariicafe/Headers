@class NSString;

@interface AWDIDSSessionCancelSent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char numberOfRecipients : 1; unsigned char remoteSessionEndReason : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasNumberOfRecipients;
@property (nonatomic) unsigned int numberOfRecipients;
@property (nonatomic) BOOL hasRemoteSessionEndReason;
@property (nonatomic) unsigned int remoteSessionEndReason;

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
