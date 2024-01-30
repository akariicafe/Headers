@class NSString, NSMutableArray;

@interface ATXPBHomeScreenCachedSuggestion : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSMutableArray *cachedSuggestionWidgetIds;
@property (retain, nonatomic) NSMutableArray *cachedSuggestionWidgetLayouts;
@property (retain, nonatomic) NSMutableArray *cachedTopOfStackLayoutKeys;
@property (retain, nonatomic) NSMutableArray *cachedTopOfStackLayouts;
@property (retain, nonatomic) NSMutableArray *fallbackSuggestions;
@property (retain, nonatomic) NSMutableArray *cachedAppPredictionPanelIds;
@property (retain, nonatomic) NSMutableArray *cachedAppPredictionPanelLayouts;
@property (retain, nonatomic) NSMutableArray *cachedSuggestedWidgetLayoutListKeys;
@property (retain, nonatomic) NSMutableArray *cachedSuggestedWidgetLayoutLists;

+ (Class)cachedSuggestionWidgetIdsType;
+ (Class)cachedSuggestionWidgetLayoutsType;
+ (Class)cachedTopOfStackLayoutKeysType;
+ (Class)cachedTopOfStackLayoutsType;
+ (Class)fallbackSuggestionsType;
+ (Class)cachedAppPredictionPanelIdsType;
+ (Class)cachedAppPredictionPanelLayoutsType;
+ (Class)cachedSuggestedWidgetLayoutListKeysType;
+ (Class)cachedSuggestedWidgetLayoutListsType;

- (id)cachedAppPredictionPanelIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedTopOfStackLayoutsCount;
- (void)addCachedSuggestionWidgetLayouts:(id)a0;
- (id)cachedSuggestedWidgetLayoutListKeysAtIndex:(unsigned long long)a0;
- (void)addCachedTopOfStackLayouts:(id)a0;
- (void)addCachedAppPredictionPanelLayouts:(id)a0;
- (id)cachedSuggestionWidgetIdsAtIndex:(unsigned long long)a0;
- (void)clearCachedTopOfStackLayoutKeys;
- (id)cachedSuggestedWidgetLayoutListsAtIndex:(unsigned long long)a0;
- (void)addCachedTopOfStackLayoutKeys:(id)a0;
- (void)clearCachedSuggestionWidgetIds;
- (unsigned long long)cachedSuggestedWidgetLayoutListKeysCount;
- (void)clearCachedTopOfStackLayouts;
- (void)addFallbackSuggestions:(id)a0;
- (unsigned long long)cachedSuggestionWidgetIdsCount;
- (void)clearCachedSuggestedWidgetLayoutLists;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addCachedSuggestedWidgetLayoutLists:(id)a0;
- (void)addCachedSuggestionWidgetIds:(id)a0;
- (unsigned long long)cachedSuggestionWidgetLayoutsCount;
- (id)cachedSuggestionWidgetLayoutsAtIndex:(unsigned long long)a0;
- (unsigned long long)fallbackSuggestionsCount;
- (void)mergeFrom:(id)a0;
- (unsigned long long)cachedAppPredictionPanelIdsCount;
- (void).cxx_destruct;
- (void)addCachedAppPredictionPanelIds:(id)a0;
- (id)cachedTopOfStackLayoutKeysAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearCachedAppPredictionPanelIds;
- (void)clearCachedAppPredictionPanelLayouts;
- (id)fallbackSuggestionsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)clearCachedSuggestionWidgetLayouts;
- (void)addCachedSuggestedWidgetLayoutListKeys:(id)a0;
- (unsigned long long)cachedSuggestedWidgetLayoutListsCount;
- (unsigned long long)hash;
- (id)cachedTopOfStackLayoutsAtIndex:(unsigned long long)a0;
- (void)clearCachedSuggestedWidgetLayoutListKeys;
- (unsigned long long)cachedAppPredictionPanelLayoutsCount;
- (id)dictionaryRepresentation;
- (id)cachedAppPredictionPanelLayoutsAtIndex:(unsigned long long)a0;
- (void)clearFallbackSuggestions;
- (unsigned long long)cachedTopOfStackLayoutKeysCount;

@end
