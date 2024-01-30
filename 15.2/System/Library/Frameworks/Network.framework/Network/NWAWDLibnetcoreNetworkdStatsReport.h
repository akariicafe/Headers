@interface NWAWDLibnetcoreNetworkdStatsReport : PBCodable <NSCopying> {
    struct { unsigned char fallbackConnectionCount : 1; unsigned char totalConnectionCount : 1; unsigned char totalSuccessfulConnectionCount : 1; } _has;
}

@property (nonatomic) BOOL hasTotalConnectionCount;
@property (nonatomic) unsigned long long totalConnectionCount;
@property (nonatomic) BOOL hasTotalSuccessfulConnectionCount;
@property (nonatomic) unsigned long long totalSuccessfulConnectionCount;
@property (nonatomic) BOOL hasFallbackConnectionCount;
@property (nonatomic) unsigned long long fallbackConnectionCount;

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
