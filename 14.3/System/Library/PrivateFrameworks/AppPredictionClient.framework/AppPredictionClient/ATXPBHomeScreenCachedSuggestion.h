@class NSString, NSMutableArray;

@interface ATXPBHomeScreenCachedSuggestion : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSMutableArray *cachedSuggestionWidgetIds;
@property (retain, nonatomic) NSMutableArray *cachedSuggestionWidgetLayouts;
@property (retain, nonatomic) NSMutableArray *cachedStackIds;
@property (retain, nonatomic) NSMutableArray *cachedStackLayouts;
@property (retain, nonatomic) NSMutableArray *fallbackSuggestions;
@property (retain, nonatomic) NSMutableArray *cachedAppPredictionPanelIds;
@property (retain, nonatomic) NSMutableArray *cachedAppPredictionPanelLayouts;

+ (Class)cachedSuggestionWidgetIdsType;
+ (Class)cachedSuggestionWidgetLayoutsType;
+ (Class)cachedStackIdsType;
+ (Class)cachedStackLayoutsType;
+ (Class)fallbackSuggestionsType;
+ (Class)cachedAppPredictionPanelIdsType;
+ (Class)cachedAppPredictionPanelLayoutsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addCachedSuggestionWidgetIds:(id)a0;
- (void)addCachedSuggestionWidgetLayouts:(id)a0;
- (void)addCachedStackIds:(id)a0;
- (void)addCachedStackLayouts:(id)a0;
- (void)addFallbackSuggestions:(id)a0;
- (void)addCachedAppPredictionPanelIds:(id)a0;
- (void)addCachedAppPredictionPanelLayouts:(id)a0;
- (unsigned long long)cachedSuggestionWidgetIdsCount;
- (void)clearCachedSuggestionWidgetIds;
- (id)cachedSuggestionWidgetIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedSuggestionWidgetLayoutsCount;
- (void)clearCachedSuggestionWidgetLayouts;
- (id)cachedSuggestionWidgetLayoutsAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedStackIdsCount;
- (void)clearCachedStackIds;
- (id)cachedStackIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedStackLayoutsCount;
- (void)clearCachedStackLayouts;
- (id)cachedStackLayoutsAtIndex:(unsigned long long)a0;
- (unsigned long long)fallbackSuggestionsCount;
- (void)clearFallbackSuggestions;
- (id)fallbackSuggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedAppPredictionPanelIdsCount;
- (void)clearCachedAppPredictionPanelIds;
- (id)cachedAppPredictionPanelIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedAppPredictionPanelLayoutsCount;
- (void)clearCachedAppPredictionPanelLayouts;
- (id)cachedAppPredictionPanelLayoutsAtIndex:(unsigned long long)a0;

@end
