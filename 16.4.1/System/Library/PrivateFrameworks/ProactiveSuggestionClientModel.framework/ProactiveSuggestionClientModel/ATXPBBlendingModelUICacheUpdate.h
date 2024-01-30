@class NSString, ATXPBHomeScreenCachedSuggestion, ATXPBSuggestionLayout, NSMutableArray, ATXPBSpotlightSuggestionLayout;

@interface ATXPBBlendingModelUICacheUpdate : PBCodable <NSCopying> {
    struct { unsigned char cacheCreationDate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (readonly, nonatomic) BOOL hasConsumerSubTypeString;
@property (retain, nonatomic) NSString *consumerSubTypeString;
@property (retain, nonatomic) NSMutableArray *clientModelIds;
@property (retain, nonatomic) NSMutableArray *clientModelCacheUpdateUUIDStrings;
@property (readonly, nonatomic) BOOL hasHomeScreenCachedSuggestion;
@property (retain, nonatomic) ATXPBHomeScreenCachedSuggestion *homeScreenCachedSuggestion;
@property (readonly, nonatomic) BOOL hasSuggestionLayout;
@property (retain, nonatomic) ATXPBSuggestionLayout *suggestionLayout;
@property (nonatomic) BOOL hasCacheCreationDate;
@property (nonatomic) double cacheCreationDate;
@property (readonly, nonatomic) BOOL hasSpotlightSuggestionLayout;
@property (retain, nonatomic) ATXPBSpotlightSuggestionLayout *spotlightSuggestionLayout;

+ (Class)clientModelCacheUpdateUUIDStringsType;
+ (Class)clientModelIdsType;

- (void)clearClientModelCacheUpdateUUIDStrings;
- (void)addClientModelIds:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)clientModelCacheUpdateUUIDStringsCount;
- (id)clientModelCacheUpdateUUIDStringsAtIndex:(unsigned long long)a0;
- (void)addClientModelCacheUpdateUUIDStrings:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)clientModelIdsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)clearClientModelIds;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)clientModelIdsCount;
- (void).cxx_destruct;

@end
