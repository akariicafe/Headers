@class NSString;

@interface AWDIDSClientProcessReceivedMessage : PBCodable <NSCopying> {
    struct { unsigned char deltaTime : 1; unsigned char payloadSize : 1; unsigned char priority : 1; unsigned char qos : 1; unsigned char threadPriority : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) NSString *service;
@property (nonatomic) BOOL hasPayloadSize;
@property (nonatomic) unsigned long long payloadSize;
@property (nonatomic) BOOL hasQos;
@property (nonatomic) unsigned long long qos;
@property (nonatomic) BOOL hasThreadPriority;
@property (nonatomic) unsigned long long threadPriority;
@property (nonatomic) BOOL hasDeltaTime;
@property (nonatomic) unsigned long long deltaTime;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) unsigned long long priority;

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
