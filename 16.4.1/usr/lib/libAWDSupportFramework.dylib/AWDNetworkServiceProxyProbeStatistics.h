@class NSString;

@interface AWDNetworkServiceProxyProbeStatistics : PBCodable <NSCopying> {
    struct { unsigned char alternateProbeTimeMsecs : 1; unsigned char genericDNSProbeTimeMsecs : 1; unsigned char genericProbeTimeMsecs : 1; unsigned char timestamp : 1; unsigned char interfaceType : 1; unsigned char protocolType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasInterfaceType;
@property (nonatomic) int interfaceType;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) BOOL hasAlternateProbeTimeMsecs;
@property (nonatomic) unsigned long long alternateProbeTimeMsecs;
@property (nonatomic) BOOL hasGenericProbeTimeMsecs;
@property (nonatomic) unsigned long long genericProbeTimeMsecs;
@property (nonatomic) BOOL hasGenericDNSProbeTimeMsecs;
@property (nonatomic) unsigned long long genericDNSProbeTimeMsecs;
@property (nonatomic) BOOL hasProtocolType;
@property (nonatomic) int protocolType;

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
- (int)StringAsInterfaceType:(id)a0;
- (id)interfaceTypeAsString:(int)a0;
- (int)StringAsProtocolType:(id)a0;
- (id)protocolTypeAsString:(int)a0;

@end
