@class NSString;

@interface AWDIDSQRAllocation : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char timestamp : 1; unsigned char hasRecipientAccepted : 1; unsigned char payloadSize : 1; unsigned char result : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) BOOL hasResult;
@property (nonatomic) unsigned int result;
@property (nonatomic) BOOL hasHasRecipientAccepted;
@property (nonatomic) unsigned int hasRecipientAccepted;
@property (nonatomic) BOOL hasPayloadSize;
@property (nonatomic) unsigned int payloadSize;
@property (readonly, nonatomic) BOOL hasTopic;
@property (retain, nonatomic) NSString *topic;
@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) NSString *service;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
