@class NSString;

@interface NTPBAnalyticsEnvelopeContentTypeConfig : PBCodable <NSCopying> {
    struct { unsigned char groupingTag : 1; unsigned char seedTime : 1; unsigned char samplingCeiling : 1; unsigned char samplingFloor : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEndpointURLString;
@property (retain, nonatomic) NSString *endpointURLString;
@property (nonatomic) BOOL hasSeedTime;
@property (nonatomic) unsigned long long seedTime;
@property (readonly, nonatomic) BOOL hasContentHeaderName;
@property (retain, nonatomic) NSString *contentHeaderName;
@property (readonly, nonatomic) BOOL hasContentHeaderValue;
@property (retain, nonatomic) NSString *contentHeaderValue;
@property (nonatomic) BOOL hasSamplingFloor;
@property (nonatomic) unsigned int samplingFloor;
@property (nonatomic) BOOL hasSamplingCeiling;
@property (nonatomic) unsigned int samplingCeiling;
@property (nonatomic) BOOL hasGroupingTag;
@property (nonatomic) unsigned long long groupingTag;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
