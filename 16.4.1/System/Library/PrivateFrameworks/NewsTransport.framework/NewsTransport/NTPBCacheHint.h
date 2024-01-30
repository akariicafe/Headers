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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
