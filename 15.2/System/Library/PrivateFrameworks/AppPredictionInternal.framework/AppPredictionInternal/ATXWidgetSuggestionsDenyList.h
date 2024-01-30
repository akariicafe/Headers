@class NSArray;

@interface ATXWidgetSuggestionsDenyList : NSObject {
    NSArray *_bannedWidgets;
}

- (id)initWithAssets:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)containsInfoSuggestion:(id)a0;

@end
