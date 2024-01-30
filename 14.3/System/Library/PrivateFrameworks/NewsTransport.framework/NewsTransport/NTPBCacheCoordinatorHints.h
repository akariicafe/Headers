@class NSMutableArray;

@interface NTPBCacheCoordinatorHints : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSMutableArray *cacheHints;

+ (Class)cacheHintsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addCacheHints:(id)a0;
- (void)clearCacheHints;
- (unsigned long long)cacheHintsCount;
- (id)cacheHintsAtIndex:(unsigned long long)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
