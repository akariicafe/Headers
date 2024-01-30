@class NSData;

@interface NTPBLRUCacheEntry : PBCodable <NSCopying> {
    struct { unsigned char lastAccessed : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSData *key;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSData *value;
@property (nonatomic) BOOL hasLastAccessed;
@property (nonatomic) unsigned long long lastAccessed;

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
