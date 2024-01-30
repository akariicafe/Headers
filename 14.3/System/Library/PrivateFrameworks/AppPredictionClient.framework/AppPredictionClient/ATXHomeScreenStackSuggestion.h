@class NSString, ATXHomeScreenWidgetIdentifiable, ATXProactiveSuggestion;

@interface ATXHomeScreenStackSuggestion : NSObject

@property (copy, nonatomic) NSString *suggestionIdentifier;
@property (retain, nonatomic) ATXProactiveSuggestion *proactiveSuggestion;
@property (nonatomic) BOOL isLowConfidenceStackRotationForStaleStack;
@property (copy, nonatomic) NSString *stackId;
@property (retain, nonatomic) ATXHomeScreenWidgetIdentifiable *widget;
@property (nonatomic) BOOL isAlreadyInStack;
@property (readonly, nonatomic) BOOL isSuggestionWidget;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
