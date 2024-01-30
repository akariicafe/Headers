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

- (unsigned long long)cachedSuggestionSourceIdsCount;
- (void)addCachedSuggestionIds:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)clearCachedSuggestionIds;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)cachedSuggestionIdsCount;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addCachedSuggestionSourceIds:(id)a0;
- (void)clearCachedSuggestionSourceIds;
- (BOOL)readFrom:(id)a0;
- (id)cachedSuggestionIdsAtIndex:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)cachedSuggestionSourceIdsAtIndex:(unsigned long long)a0;

@end
