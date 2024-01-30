@class NSString, NSSet, NSArray, ATXInfoSuggestion, ATXProactiveSuggestion, ATXHomeScreenWidgetIdentifiable;

@interface ATXHomeScreenStackSuggestion : NSObject {
    NSArray *_topWidgetSuggestions;
}

@property (readonly, nonatomic) BOOL isTopWidgetSuggestionsWidget;
@property (readonly, nonatomic) BOOL isLowConfidenceStackRotationForStaleStack;
@property (readonly, nonatomic) ATXInfoSuggestion *topWidgetInfoSuggestion;
@property (readonly, nonatomic) ATXProactiveSuggestion *topWidgetProactiveSuggestion;
@property (readonly, nonatomic) NSString *stackId;
@property (readonly, nonatomic) ATXHomeScreenWidgetIdentifiable *topWidget;
@property (readonly, nonatomic) NSSet *suggestedWidgets;

+ (id)_widgetProactiveSuggestionFromLayout:(id)a0;
+ (id)_widgetAndSuggestionsFromSuggestionLayout:(id)a0;
+ (id)_widgetsFromSuggestionLayouts:(id)a0;
+ (unsigned long long)_stackLayoutSizeFromUILayoutType:(long long)a0;
+ (id)widgetFromSuggestionLayout:(id)a0;
+ (id)stackSuggestionsFromCachedSuggestions:(id)a0;

- (id)description;
- (id)initWithStackIdentifier:(id)a0 layoutOfTopWidget:(id)a1 layoutOfSuggestedWidgets:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initForDebuggingWithStackIdentifier:(id)a0 topWidget:(id)a1 suggestedWidgets:(id)a2;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
