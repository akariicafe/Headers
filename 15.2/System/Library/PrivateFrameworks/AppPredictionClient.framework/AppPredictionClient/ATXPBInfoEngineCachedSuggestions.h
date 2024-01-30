@class NSMutableArray;

@interface ATXPBInfoEngineCachedSuggestions : PBCodable <NSCopying> {
    struct { unsigned char length : 1; } _has;
}

@property (nonatomic) BOOL hasLength;
@property (nonatomic) unsigned long long length;
@property (retain, nonatomic) NSMutableArray *cachedSuggestionIds;
@property (retain, nonatomic) NSMutableArray *cachedSuggestionSourceIds;

+ (Class)cachedSuggestionIdsType;
+ (Class)cachedSuggestionSourceIdsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addCachedSuggestionSourceIds:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)clearCachedSuggestionIds;
- (unsigned long long)cachedSuggestionSourceIdsCount;
- (unsigned long long)cachedSuggestionIdsCount;
- (void)writeTo:(id)a0;
- (id)cachedSuggestionSourceIdsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)clearCachedSuggestionSourceIds;
- (unsigned long long)hash;
- (void)addCachedSuggestionIds:(id)a0;
- (id)cachedSuggestionIdsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
