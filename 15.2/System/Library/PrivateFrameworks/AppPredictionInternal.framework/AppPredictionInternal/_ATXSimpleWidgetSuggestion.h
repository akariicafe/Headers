@class ATXProactiveSuggestion, NSString, ATXSuggestionLayout, ATXHomeScreenWidgetIdentifiable, _ATXHomeScreenStackState;
@protocol ATXSuggestionDeduplicatorProtocol;

@interface _ATXSimpleWidgetSuggestion : NSObject <_ATXWidgetSuggesting> {
    id<ATXSuggestionDeduplicatorProtocol> _suggestionDeduplicator;
    ATXProactiveSuggestion *_suggestion;
}

@property (readonly, weak, nonatomic) _ATXHomeScreenStackState *stack;
@property (readonly, nonatomic) ATXHomeScreenWidgetIdentifiable *widget;
@property (readonly, nonatomic) ATXSuggestionLayout *suggestionLayout;
@property (readonly, nonatomic) ATXProactiveSuggestion *mainSuggestionInLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isSuggestion:(id)a0 compatibleWithStack:(id)a1;

- (BOOL)containsIdenticalContentOfSuggestion:(id)a0;
- (void).cxx_destruct;
- (id)initWithWidget:(id)a0 suggestion:(id)a1 stack:(id)a2 suggestionDeduplicator:(id)a3;
- (id)initWithSuggestion:(id)a0 stack:(id)a1 suggestionDeduplicator:(id)a2;
- (void)_setSuggestion:(id)a0;

@end
