@class NSArray;

@interface ATXSuggestedPagesWidgetAggregator : NSObject <ATXSuggestedPagesWidgetDataSource> {
    NSArray *_sources;
}

- (id)provideWidgetsForPageType:(long long)a0 environment:(id)a1;
- (id)init;
- (id)initWithSources:(id)a0;
- (void).cxx_destruct;

@end
