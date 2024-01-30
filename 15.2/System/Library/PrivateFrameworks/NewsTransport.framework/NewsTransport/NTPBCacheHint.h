@class NSString;

@interface NTPBCacheHint : PBCodable <NSCopying> {
    struct { unsigned char accessTime : 1; unsigned char lifetime : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasLifetime;
@property (nonatomic) int lifetime;
@property (nonatomic) BOOL hasAccessTime;
@property (nonatomic) unsigned long long accessTime;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
