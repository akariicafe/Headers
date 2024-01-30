@class NSUUID, NSDictionary, NSArray, NSString;

@interface ATXHomeScreenCachedSuggestions : NSObject <ATXUICacheProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSDictionary *cachedSuggestionWidgetLayouts;
@property (readonly, nonatomic) NSDictionary *cachedAppPredictionPanelLayouts;
@property (readonly, nonatomic) NSDictionary *cachedTopOfStackLayouts;
@property (readonly, nonatomic) NSDictionary *cachedSuggestedWidgetsLayouts;
@property (readonly, nonatomic) NSArray *fallbackSuggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProto:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)_jsonRawDataForWidgetLayoutMapping:(id)a0;
- (id)initWithUUID:(id)a0 suggestionWidgetLayouts:(id)a1 appPredictionPanelLayouts:(id)a2 topOfStackLayouts:(id)a3 suggestedWidgetLayouts:(id)a4 fallbackSuggestions:(id)a5;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)protoForBiome;
- (id)initWithProtoData:(id)a0;
- (id)jsonRawData;
- (id)descriptionWithoutPreviews;
- (id)_protoLayoutsFromLayoutDictionary:(id)a0 orderedByKeys:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)compactDescription;
- (id)_layoutDictionaryWithKeys:(id)a0 protoLayouts:(id)a1;
- (id)init;
- (id)_layoutListDictionaryWithKeys:(id)a0 protoLayoutLists:(id)a1;
- (id)_jsonRawDataForLayoutListMapping:(id)a0;
- (id)_protoLayoutListsFromLayoutListDictionary:(id)a0 orderedByKeys:(id)a1;
- (id)allSuggestionsInCachedSuggestions;
- (void).cxx_destruct;
- (id)minSuggestionsInCachedSuggestionsWithoutPreviewsOrFallbacks;

@end
