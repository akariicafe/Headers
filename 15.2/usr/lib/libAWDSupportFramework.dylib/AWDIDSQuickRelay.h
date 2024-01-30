@class NSString;

@interface AWDIDSQuickRelay : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char timestamp : 1; unsigned char eventSubType : 1; unsigned char eventType : 1; unsigned char interfaceType : 1; unsigned char isInitiator : 1; unsigned char protocolVersion : 1; unsigned char providerType : 1; unsigned char resultCode : 1; unsigned char retryCount : 1; unsigned char skeEnabled : 1; unsigned char transportType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) unsigned int eventType;
@property (nonatomic) BOOL hasEventSubType;
@property (nonatomic) unsigned int eventSubType;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) BOOL hasResultCode;
@property (nonatomic) unsigned int resultCode;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) unsigned int transportType;
@property (nonatomic) BOOL hasInterfaceType;
@property (nonatomic) unsigned int interfaceType;
@property (nonatomic) BOOL hasSkeEnabled;
@property (nonatomic) unsigned int skeEnabled;
@property (nonatomic) BOOL hasIsInitiator;
@property (nonatomic) unsigned int isInitiator;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) unsigned int retryCount;
@property (readonly, nonatomic) BOOL hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL hasSubServiceName;
@property (retain, nonatomic) NSString *subServiceName;
@property (nonatomic) BOOL hasProviderType;
@property (nonatomic) unsigned int providerType;

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
