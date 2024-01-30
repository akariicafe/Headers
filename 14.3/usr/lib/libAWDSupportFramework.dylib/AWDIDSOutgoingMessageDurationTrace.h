@class NSString;

@interface AWDIDSOutgoingMessageDurationTrace : PBCodable <NSCopying> {
    struct { unsigned char compressedMessageSize : 1; unsigned char messagesOnQueue : 1; unsigned char timestamp : 1; unsigned char uncompressedMessageSize : 1; unsigned char aggregatedMessageSendCount : 1; unsigned char avgAggregatedMessageSendDuration : 1; unsigned char avgEncryptionDuration : 1; unsigned char command : 1; unsigned char compressPayloadDuration : 1; unsigned char compressPayloadStart : 1; unsigned char encryptionCount : 1; unsigned char iDQueryDuration : 1; unsigned char iDQueryStart : 1; unsigned char messageOnQueueDuration : 1; unsigned char messageOnQueueStart : 1; unsigned char priority : 1; unsigned char sendToDaemonDuration : 1; unsigned char sendToDaemonStart : 1; unsigned char storeInDatabaseDuration : 1; unsigned char storeInDatabaseStart : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSendToDaemonStart;
@property (nonatomic) unsigned int sendToDaemonStart;
@property (nonatomic) BOOL hasSendToDaemonDuration;
@property (nonatomic) unsigned int sendToDaemonDuration;
@property (nonatomic) BOOL hasStoreInDatabaseStart;
@property (nonatomic) unsigned int storeInDatabaseStart;
@property (nonatomic) BOOL hasStoreInDatabaseDuration;
@property (nonatomic) unsigned int storeInDatabaseDuration;
@property (nonatomic) BOOL hasCompressPayloadStart;
@property (nonatomic) unsigned int compressPayloadStart;
@property (nonatomic) BOOL hasCompressPayloadDuration;
@property (nonatomic) unsigned int compressPayloadDuration;
@property (nonatomic) BOOL hasUncompressedMessageSize;
@property (nonatomic) unsigned long long uncompressedMessageSize;
@property (nonatomic) BOOL hasCompressedMessageSize;
@property (nonatomic) unsigned long long compressedMessageSize;
@property (nonatomic) BOOL hasIDQueryStart;
@property (nonatomic) unsigned int iDQueryStart;
@property (nonatomic) BOOL hasIDQueryDuration;
@property (nonatomic) unsigned int iDQueryDuration;
@property (nonatomic) BOOL hasMessageOnQueueStart;
@property (nonatomic) unsigned int messageOnQueueStart;
@property (nonatomic) BOOL hasMessageOnQueueDuration;
@property (nonatomic) unsigned int messageOnQueueDuration;
@property (nonatomic) BOOL hasMessagesOnQueue;
@property (nonatomic) unsigned long long messagesOnQueue;
@property (nonatomic) BOOL hasEncryptionCount;
@property (nonatomic) unsigned int encryptionCount;
@property (nonatomic) BOOL hasAvgEncryptionDuration;
@property (nonatomic) unsigned int avgEncryptionDuration;
@property (nonatomic) BOOL hasAggregatedMessageSendCount;
@property (nonatomic) unsigned int aggregatedMessageSendCount;
@property (nonatomic) BOOL hasAvgAggregatedMessageSendDuration;
@property (nonatomic) unsigned int avgAggregatedMessageSendDuration;
@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) NSString *service;
@property (nonatomic) BOOL hasCommand;
@property (nonatomic) unsigned int command;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) unsigned int priority;

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
