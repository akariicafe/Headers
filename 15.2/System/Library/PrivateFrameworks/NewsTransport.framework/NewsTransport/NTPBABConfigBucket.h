@class NTPBConfig;

@interface NTPBABConfigBucket : PBCodable <NSCopying> {
    struct { unsigned char bucketCeiling : 1; unsigned char bucketFloor : 1; } _has;
}

@property (nonatomic) BOOL hasBucketFloor;
@property (nonatomic) long long bucketFloor;
@property (nonatomic) BOOL hasBucketCeiling;
@property (nonatomic) long long bucketCeiling;
@property (readonly, nonatomic) BOOL hasConfig;
@property (retain, nonatomic) NTPBConfig *config;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
