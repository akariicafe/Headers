@class NSUUID, NSDictionary, NSArray;

@interface ATXHomeScreenCachedSuggestions : NSObject <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSDictionary *cachedSuggestionWidgetLayouts;
@property (readonly, nonatomic) NSDictionary *cachedAppPredictionPanelLayouts;
@property (readonly, nonatomic) NSDictionary *cachedStackLayouts;
@property (readonly, nonatomic) NSArray *fallbackSuggestions;

- (id)jsonRawData;
- (id)init;
- (void).cxx_destruct;
- (id)_jsonRawDataForWidgetLayoutMapping:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)allSuggestionsInCachedSuggestions;
- (unsigned long long)hash;
- (id)minSuggestionsInCachedSuggestionsWithoutPreviewsOrFallbacks;
- (id)initWithCoder:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (id)initWithUUID:(id)a0 suggestionWidgetLayouts:(id)a1 appPredictionPanelLayouts:(id)a2 stackLayouts:(id)a3 fallbackSuggestions:(id)a4;
- (id)description;
- (id)_layoutDictionaryWithKeys:(id)a0 protoLayouts:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)_protoLayoutsFromLayoutDictionary:(id)a0 orderedByKeys:(id)a1;
- (id)descriptionWithoutPreviews;
- (id)protoForBiome;
- (void)encodeWithCoder:(id)a0;

@end
