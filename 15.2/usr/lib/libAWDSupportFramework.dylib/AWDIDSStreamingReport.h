@class NSString;

@interface AWDIDSStreamingReport : PBCodable <NSCopying> {
    struct { unsigned char bytesReceived : 1; unsigned char bytesSent : 1; unsigned char packetsReceived : 1; unsigned char packetsSent : 1; unsigned char priority : 1; unsigned char samplingInterval : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) NSString *service;
@property (readonly, nonatomic) BOOL hasStreamName;
@property (retain, nonatomic) NSString *streamName;
@property (nonatomic) BOOL hasSamplingInterval;
@property (nonatomic) unsigned long long samplingInterval;
@property (nonatomic) BOOL hasBytesSent;
@property (nonatomic) unsigned long long bytesSent;
@property (nonatomic) BOOL hasPacketsSent;
@property (nonatomic) unsigned long long packetsSent;
@property (nonatomic) BOOL hasBytesReceived;
@property (nonatomic) unsigned long long bytesReceived;
@property (nonatomic) BOOL hasPacketsReceived;
@property (nonatomic) unsigned long long packetsReceived;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) unsigned long long priority;
@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
