@class NSData;

@interface AWDWiFiMetricsManagerLeakyAPStats : PBCodable <NSCopying> {
    struct { unsigned char hashCode : 1; unsigned char timestamp : 1; unsigned char version : 1; unsigned char leakyApDecision : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned long long version;
@property (readonly, nonatomic) BOOL hasOui;
@property (retain, nonatomic) NSData *oui;
@property (readonly, nonatomic) BOOL hasLeakyApStats;
@property (retain, nonatomic) NSData *leakyApStats;
@property (nonatomic) BOOL hasLeakyApDecision;
@property (nonatomic) unsigned int leakyApDecision;
@property (nonatomic) BOOL hasHashCode;
@property (nonatomic) unsigned long long hashCode;

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
