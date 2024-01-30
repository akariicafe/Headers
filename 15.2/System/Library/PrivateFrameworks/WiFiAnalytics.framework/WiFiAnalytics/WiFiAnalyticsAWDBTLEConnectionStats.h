@interface WiFiAnalyticsAWDBTLEConnectionStats : PBCodable <NSCopying> {
    struct { unsigned char complete : 1; unsigned char dc0 : 1; unsigned char dc1 : 1; unsigned char dc2 : 1; unsigned char dc3 : 1; unsigned char dc4 : 1; unsigned char dc5 : 1; unsigned char peakOutage : 1; unsigned char start : 1; unsigned char totalDuration : 1; } _has;
}

@property (nonatomic) BOOL hasStart;
@property (nonatomic) unsigned int start;
@property (nonatomic) BOOL hasComplete;
@property (nonatomic) unsigned int complete;
@property (nonatomic) BOOL hasPeakOutage;
@property (nonatomic) unsigned int peakOutage;
@property (nonatomic) BOOL hasTotalDuration;
@property (nonatomic) unsigned int totalDuration;
@property (nonatomic) BOOL hasDc0;
@property (nonatomic) unsigned int dc0;
@property (nonatomic) BOOL hasDc1;
@property (nonatomic) unsigned int dc1;
@property (nonatomic) BOOL hasDc2;
@property (nonatomic) unsigned int dc2;
@property (nonatomic) BOOL hasDc3;
@property (nonatomic) unsigned int dc3;
@property (nonatomic) BOOL hasDc4;
@property (nonatomic) unsigned int dc4;
@property (nonatomic) BOOL hasDc5;
@property (nonatomic) unsigned int dc5;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
