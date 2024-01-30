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

+ (Class)cachedAppPredictionPanelIdsType;
+ (Class)cachedAppPredictionPanelLayoutsType;
+ (Class)cachedSuggestedWidgetLayoutListKeysType;
+ (Class)cachedSuggestedWidgetLayoutListsType;
+ (Class)cachedSuggestionWidgetIdsType;
+ (Class)cachedSuggestionWidgetLayoutsType;
+ (Class)cachedTopOfStackLayoutKeysType;
+ (Class)cachedTopOfStackLayoutsType;
+ (Class)fallbackSuggestionsType;

- (void)clearCachedSuggestionWidgetLayouts;
- (id)cachedSuggestionWidgetIdsAtIndex:(unsigned long long)a0;
- (void)addCachedSuggestionWidgetLayouts:(id)a0;
- (id)cachedSuggestedWidgetLayoutListKeysAtIndex:(unsigned long long)a0;
- (void)addCachedAppPredictionPanelIds:(id)a0;
- (id)cachedTopOfStackLayoutKeysAtIndex:(unsigned long long)a0;
- (void)clearCachedSuggestionWidgetIds;
- (unsigned long long)cachedSuggestionWidgetLayoutsCount;
- (unsigned long long)cachedTopOfStackLayoutsCount;
- (void)clearCachedAppPredictionPanelLayouts;
- (void)addCachedTopOfStackLayouts:(id)a0;
- (id)cachedSuggestedWidgetLayoutListsAtIndex:(unsigned long long)a0;
- (void)clearFallbackSuggestions;
- (void)clearCachedTopOfStackLayoutKeys;
- (unsigned long long)cachedAppPredictionPanelLayoutsCount;
- (void)addCachedSuggestionWidgetIds:(id)a0;
- (unsigned long long)cachedTopOfStackLayoutKeysCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearCachedSuggestedWidgetLayoutLists;
- (id)dictionaryRepresentation;
- (id)fallbackSuggestionsAtIndex:(unsigned long long)a0;
- (void)addCachedAppPredictionPanelLayouts:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)cachedSuggestedWidgetLayoutListKeysCount;
- (void)clearCachedSuggestedWidgetLayoutListKeys;
- (id)cachedTopOfStackLayoutsAtIndex:(unsigned long long)a0;
- (id)cachedSuggestionWidgetLayoutsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)addCachedSuggestedWidgetLayoutListKeys:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearCachedAppPredictionPanelIds;
- (unsigned long long)fallbackSuggestionsCount;
- (void)addCachedTopOfStackLayoutKeys:(id)a0;
- (id)cachedAppPredictionPanelIdsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)addCachedSuggestedWidgetLayoutLists:(id)a0;
- (void)addFallbackSuggestions:(id)a0;
- (id)description;
- (void)clearCachedTopOfStackLayouts;
- (unsigned long long)cachedAppPredictionPanelIdsCount;
- (id)cachedAppPredictionPanelLayoutsAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedSuggestionWidgetIdsCount;
- (unsigned long long)cachedSuggestedWidgetLayoutListsCount;
- (void).cxx_destruct;

@end
