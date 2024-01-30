@class NSMutableArray;

@interface NTPBCacheCoordinatorHints : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSMutableArray *cacheHints;

+ (Class)cacheHintsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)cacheHintsCount;
- (void)clearCacheHints;
- (void)addCacheHints:(id)a0;
- (id)cacheHintsAtIndex:(unsigned long long)a0;

@end
