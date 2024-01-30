@interface CKDPThrottlingConfigRateLimit : PBCodable <NSCopying> {
    struct { unsigned char allowedRequestCount : 1; unsigned char intervalLengthSec : 1; } _has;
}

@property (nonatomic) BOOL hasIntervalLengthSec;
@property (nonatomic) int intervalLengthSec;
@property (nonatomic) BOOL hasAllowedRequestCount;
@property (nonatomic) int allowedRequestCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
